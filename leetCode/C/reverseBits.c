#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n)
{
	uint32_t res = 0;
	uint32_t bit = 0;
	for (int i = 0; i < 32; i++)
	{
		bit = (n >> i) & 1;
		res = res | (bit << (31 - i));
	}
	return (res);
}    
/*
Example:
n = 0010

i = 0
n = 0010
n >> 0 = 0010    // No shift on first iteration
bit = 0010 & 1 = 0    // Gets last bit
res = 0000 | (0 << 3) = 0000

i = 2
n = 0010
n >> 1 = 0001    // Shifted right by 1
bit = 0001 & 1 = 1    // Gets last bit
res = 0000 | (1 << 2) = 0100

i = 3
n = 0010
n >> 2 = 0000    // Shifted right by 2
bit = 0000 & 1 = 0    // Gets last bit
res = 0100 | (0 << 1) = 0100

i = 4
n = 0010
n >> 3 = 0000    // Shifted right by 3
bit = 0000 & 1 = 0    // Gets last bit
res = 0100 | (0 << 0) = 0100
*/