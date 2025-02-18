#include "cpp.h"

using namespace std;

class Solution {
  public:
    int sumOfDivisors(int n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i % j == 0)
					sum += j;
			}
		}
		return (sum);
    };

	vector<int> findDivisors(int n)
	{
		vector<int> div;

		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				div.push_back(i);
				if (n / i != i)
					div.push_back(n / i);
			}
		}
		return (div);
	}
};

int main()
{
    Solution solution;
    // cout << solution.sumOfDivisors(5) << endl;
	vector<int> divisors = solution.findDivisors(36);

	/*
	for (int divisor: divisors)
		cout << divisor << " ";
	*/

	for (int i = 0; i < divisors.size(); ++i)
		cout << divisors[i] << " ";

}