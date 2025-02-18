#include <iostream>

using namespace std;

class Solution {
  public:
    int evenlyDivides(int n) {
        
        int count = 0;
		int remain = 0;
        int full_nbr = n;
        
        while (n != 0)
        {
            remain = n % 10;
            if (remain != 0 && full_nbr % remain == 0 )
                count++;
            n = n / 10;
        }
    	return (count);
    }
};

int main()
{
    Solution solution;
    cout << solution.evenlyDivides(20) << endl;
}

/*
Count digit using log
int count = (int)(log10(n)+1);
*/