#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
	int temp = nums[0];
	int count = 1;

	for (int i = 1; i < numsSize; i++)
	{
		if (temp == nums[i])
			count++;
		else
		{
			count--;
			if (count == 0)
			{
				count = 1;
				temp = nums[i];
			}
		}
	}
	return (temp);
}

int main()
{
	int nums[] = {3, 2, 3};
	int nums1[] = {-1,1,1,1,2,1};
	printf("%d", majorityElement(nums, 3));
	printf("\n%d", majorityElement(nums1, 6));

}

/*
2,2,1,1,1,2,2
0 1 2 3 4 5 6
numsSize = 7
temp = nums[0] = 2
count = 1

i = 1
temp = nums[1] = 2
count = 2

i = 2
2 == nums[2] = 1
count-- = 1

i = 3
2 == nums[3] = 1
count-- = 0
count = 1
temp = nums[3] = 1
temp = num[3] = 1

i = 4
temp == num[4] = 1
count = 2

i = 5
temp == num[5] = 2
count -- = 1

i = 6
temp = num[6] = 2
count-- = 0
count 1 
temp = nums[6] = 2;

*/