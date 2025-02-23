#include "cpp.h"

class Solution {
	public:
		bool isIsomorphic(string s, string t){
			vector<int> mapS(256, -1);
			vector<int> mapT(256, -1);

			if (s.size() != t.size()) return false;
			for (int i = 0; i < s.size(); i++)
			{
				char c1 = s[i];
				char c2 = t[i];

				if (mapS[c1] == -1 && mapT[c2] == -1)
				{
					mapS[c1] = c2;
					mapS[c2] = c1;
				}
				else if (mapS[c1] != c2 || mapT[c2] != c1)
					return false;
			}
			return (true);
	}
};

int main()
{
	Solution solution;

	string s = "bbbaaaba";
	string t = "aaabbbba";

	cout << solution.isIsomorphic(s, t) << endl;

}