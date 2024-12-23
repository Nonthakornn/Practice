#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **fizzBuzz(int n, int *returnSize)
{
	int i = 1;
	char **result = malloc(sizeof(char *) * n);
	
	while (i <= n)
	{
		result[i - 1] = malloc(sizeof(char) * 9);
		if (i % 3 == 0 && i % 5 == 0)
			strcpy(result[i - 1], "FizzBuzz");
		else if (i % 3 == 0)
			strcpy(result[i - 1], "Fizz");
		else if (i % 5 == 0)
			strcpy(result[i - 1], "Bizz");
		else
			sprintf(result[i - 1], "%d", i);
		i++;
	}
	*returnSize = n;
	return (result);

}


int main()
{
	int n = 5;
	int returnSize;
	char **result = fizzBuzz(n, &returnSize);
	for (int i = 0; i < returnSize; i++)
	{
		printf("\"%s\",", result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}