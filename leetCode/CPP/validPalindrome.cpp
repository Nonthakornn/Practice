#include <iostream>
#include <string>
#include <cctype>

using std::string;

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
};