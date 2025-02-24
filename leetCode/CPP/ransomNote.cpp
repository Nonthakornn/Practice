#include "cpp.h"

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m(256, 0);

        if (magazine.size() < ransomNote.size())
            return (false);
        for (int i = 0; i < magazine.size(); i++)
            m[magazine[i]] += 1;

        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (m[ransomNote[i]] > 0)
                m[ransomNote[i]]--;
            else
                return false;
        }
        return (true);
    }
};