#include "cpp.h"

using namespace std;

class Solution {
	public:
		void printNos(int n)
		{
			if (n > 1)
				printNos (n - 1);
			cout << n << " ";
		}

		void printGfg(int N)
		{
			if (N >= 1)
			{
				printGfg(N - 1);
				cout << "GFG" << " ";
			}
		}

		void printNto1(int n)
		{
			if (n >= 1)
			{
				cout << n << " ";
				printNto1(n - 1);
			}
		}

		int sumOfSeries(int n)
		{
			// int sum = 0;
			if (n == 0)
				return (0);
			return pow(n, 3) + sumOfSeries(n - 1);

		}
};

int main()
{
	Solution solution;
	// solution.printNos(10);
	// solution.printGfg(5);
	// solution.printNto1(10);
	cout << solution.sumOfSeries(3);
}