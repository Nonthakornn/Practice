#include "c.h"

/*
k = k % numsSize - Avoiding unnecessary rotations:
For an array of size 7 like [1,2,3,4,5,6,7]:
Rotating by k = 7 gives back [1,2,3,4,5,6,7] (same as the original)
Rotating by k = 8 is equivalent to rotating by k = 1, giving [7,1,2,3,4,5,6]
Rotating by k = 10 is equivalent to rotating by k = 3, giving [5,6,7,1,2,3,4]

Optimization:
Without this line, if k = 1000 for an array of size 7, you would do 1000 rotations
With this line, you only do 6 rotations (1000 % 7 = 6)
*/

void rotate(int* nums, int numsSize, int k)
{
	if (numsSize <= 1 || k == 0)
		return ;
	
	int *temp = malloc(sizeof(int) * numsSize);
	k = k % numsSize;

	for (int i = 0; i < numsSize; i++)
		temp[(i + k) % numsSize] = nums[i];

	for (int i = 0; i < numsSize; i++)
		nums[i] = temp[i];

	free(temp);
}

/*
Time Exceed
void rotate(int* nums, int numsSize, int k) {

	int temp = 0;
	for (int j = 0; j < k ; j++)
	{
		temp = nums[numsSize - 1];
		printf("temp: %d\n", temp);
		for (int i = (numsSize - 2) ; i >= 0; i--)
		{
			nums[i + 1] = nums[i];
		}
		nums[0] =  temp;
	}
}
*/

int main()
{
	int nums[] = {1,2,3,4,5,6,7}; // 5 6 7 1 2 3
	rotate(nums, 7, 3);

}