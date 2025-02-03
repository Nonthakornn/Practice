#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *num, int numSize, int target, int *returnSize)
{
	int i = 0;
	int j = 0;
	int *index = malloc(2 * sizeof(int));
	*returnSize = 2;
	while (i < numSize)
	{
		j = i + 1;
		while (j < numSize)
		{
			if (num[i] + num[j] == target)
			{
				index[0] = i;
				index[1] = j;
				return (index);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	int i = 0;
	int nums[] = {2,7,11,15};
	int returnSize;

	int *result = twoSum(nums,4,13,&returnSize);
	for (int i = 0; i < returnSize; i++)
		printf("%d ", result[i]);


}