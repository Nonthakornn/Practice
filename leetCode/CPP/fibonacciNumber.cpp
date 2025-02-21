#include "cpp.h"

class Solution {
public:
	int fib(int n)
	{
		//Base Case
		if (n == 0) return 0;
		if (n == 1) return 1;
		//Recursive Case
		return fib(n - 1) + fib (n - 2);
	}
};

int main()
{
	Solution soulution;
	std::cout << soulution.fib(6) << std::endl;
}