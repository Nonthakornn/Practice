#include "cpp.h" 

using namespace std;

class Solution {
  public:
    int gcd(int a, int b)
	{
		for (int i = min(a, b); i >= 1; i--)
		{
			if (a % i == 0 && b % i == 0)
				return (i);
		}
		return (0);
    }

	vector<int> lcmAndGcd(int a, int b) {
        int gcd = 0;
        for (int i = min(a,b); i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
                break;
            }
        }
        int lcm = (a * b) / gcd;
        return vector<int> {lcm, gcd};
    }
};

int main()
{
    Solution solution;
	cout << solution.gcd(9, 12) << endl;

	int a = 4, b = 8;
    vector<int> result = solution.lcmAndGcd(a, b);
    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;
}
