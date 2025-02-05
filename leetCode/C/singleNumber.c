#include <stdio.h>

int singleNumber(int *num, int numSize)
{
	int res = 0;
	for (int i = 0; i < numSize; i++)
	{
		res = res ^ num[i];
	}
	return (res);
}

/*
1 = 0 0 0 1
2 = 0 0 1 0
3 = 0 0 1 1
4 = 0 1 0 0
5 = 0 1 0 1

Left Shifting is equivalent to multiplication by 2^right operand
var = 3
var << 1
output: 6 [3 x 2 ^ 1]

var = 3
var << 4
output: 48 [3 x 2 ^ 4]

Right Shifting is equvalent to division by 2 ^ right operand
var = 3
var >> 1
output = 1 [3 / 2 ^ 1]

var = 32
var >> 4
output: 2 [32 / 2 ^ 4]
*/