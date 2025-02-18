#include "cpp.h"

using namespace std;

class Solution{
public:
	int reverse(int x)
	{
		long remain = 0;
		long result = 0;
		while (x != 0)
		{
			remain = x % 10;
			result = result * 10 + remain;
			if (result > INT_MAX || result < INT_MIN)
                return (0);
			x = x / 10;
		}
		return (result);
	}
};

int main()
{
	Solution ans;
	cout << ans.reverse(1534236469) << endl;
}