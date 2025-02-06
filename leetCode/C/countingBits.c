#include <stdio.h>
#include <stdlib.h>

int* countBits(int n, int* returnSize)
{
	*returnSize = n + 1;
    int *ans = malloc(sizeof(int) * (n + 1));
    int res = 0;
    int x = 0;
    for (int i = 0; i <= n; i++)
    {
        res = 0;
        x = i;
        while (x != 0)
        {
            res += x % 2;
            x = x >> 1;
        }
        ans[i] = res;
    }
    return (ans);
}

int main()
{
	int returnSize;
	int *res = countBits(6, &returnSize);
	for (int i = 0; i < returnSize; i++)
		printf("%d ", res[i]);
}