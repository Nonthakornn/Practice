#include "cpp.h"

using namespace std;

class Solution {
public:
	bool is_armstrong(int x)
	{
		int temp = x;
		int result = 0;
		int remain = 0;

		while (temp != 0)
		{
			remain = temp % 10;
			remain = pow(remain, 3);
			result += remain;
			temp = temp / 10;
		}
		if (result == x)
			return (true);
		return (false);
	}
};

int main()
{
	Solution ans;
	cout << ans.is_armstrong(371) << endl;
	cout << ans.is_armstrong(35) << endl;
}
