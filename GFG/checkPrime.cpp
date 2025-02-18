#include <iostream>

using namespace std;

class Solution {
  public:
    bool is_prime(int n)
	{
		int count = 0;
		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				count++;
				if (n / i != i)
					count++;
			}
		}
		if (count == 2)
			return true;
		return (false);
    }
};

int main()
{
    Solution solution;
    cout << solution.is_prime(12) << endl;
}