#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize)
{
    int left = 1;

    for (int right = 1; right < numsSize; right++)
    {
        if (nums[right] != nums[right - 1])
        {
            nums[left] = nums[right];
            left++;
        }
    }
    return (left);
}

int main()
{
	int nums[] = {1,1,2,2,2,3,3,4};
	int newnums = removeDuplicates(nums, 8);
	for (int i = 0; i < newnums; i++)
		printf("%d ", nums[i]);
}
    
