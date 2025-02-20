#include <iostream>
#include <string>
#include <cctype>

using std::string;
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0;
        int R = s.size() - 1;
        if (s.size() == 1)
            return true;

        while (L < R)
        {
            while (L < R && !isalnum(s[L]))
                L++;
            while (L < R && !isalnum(s[R]))
                R--;
            if (tolower(s[L]) != tolower(s[R]))
                return false;
            L++;
            R--;
        }
        return (true);
    }

	//This solution will fail due to Memory Limit
	bool isPalindrome_recursion(string s)
	{
		if (s.length() <= 1) return true;

		while (s. length() > 0 && !isalnum(s[0]))
			s = s.substr(1);
		while (s.length() > 0 && !isalnum(s[s.length() - 1]))
			s= s.substr(0, s.length() - 1);

			   if (s.length() == 0) return true;
		if (tolower(s[0]) != tolower(s[s.length()-1])) {
			return false;
		}
    	return isPalindrome(s.substr(1, s.length()-2));
	}
};

int main()
{
	Solution solution;
	cout << solution.isPalindrome_recursion("Madam");
}