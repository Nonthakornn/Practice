#include "cpp.h"

using namespace std;

class Solution {
public:
	bool isPalindrome(int x)
	{
		int temp = x;
		int reverse = 0;
		int remain = 0;

		if (x < 0)
			return (false);
		while (temp != 0)
		{
			remain = temp % 10;
			reverse = reverse * 10 + remain;
			if (reverse > INT_MAX)
				return (false);
			temp = temp / 10;
		}
		cout << reverse << endl;
		if (x == reverse)
			return (true);
		return (false);
	}
};

int main()
{
	Solution ans;
	cout << ans.isPalindrome(-121);
}