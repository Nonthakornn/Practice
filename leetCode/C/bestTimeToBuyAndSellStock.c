#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
	if (pricesSize <= 1)
		return (0);

    int min = prices[0];
    int max = 0;
    int result = 0;

    for (int i = 1; i < pricesSize; i++)
    {
		if (prices[i] < min)
			min = prices[i];
		else if (prices[i] - min > max)
			max = prices[i] - min;
    }
	return (max);
}

int main()
{
	int num[] = {7,1,5,3,6,4};
	// int num[] = {7,6,4,3,1};
	// int num[] = {2,4,1};
	// int num[] = {3,2,6,1,4};
	int res = maxProfit(num, 6);
	printf("result: %d", res);

}

/*
Time Limit Exceeded
int maxProfit(int* prices, int pricesSize) {

    int j = 0;
    int min = 0;
    int max = 0;
    int result = 0;

    for (int i = 0; i < pricesSize; i++)
    {
		min = prices[i];
		j = i + 1;
		for (; j < pricesSize ; j++)
		{
			if (prices[j] > prices[i])
			{
				if (prices[j] - prices[i] > max)
					max = prices[j] - prices[i];
			}
		}
    }
	return (max);
}
*/
