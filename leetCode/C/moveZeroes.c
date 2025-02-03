#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize) {

	int count = 0;

    if (nums[0] == 0 && numsSize == 1)
    {
        printf("%d", 0);
        return ;
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
			nums[count] = nums[i];
			count++;
        }
    }

    for (int i = count; i < numsSize; i++)
		nums[i] = 0;
}

int main()
{
	int nums[5] = {0,1,0,3,12};
	moveZeroes(nums, 5);
}