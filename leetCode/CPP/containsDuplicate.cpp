#include "cpp.h"

class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			unordered_map <int, int> m;
			for (int i = 0; i < nums.size(); i++)
			{
				m[nums[i]]+= 1;
				if (m[nums[i]] > 1)
					return (true);
			}
			return (false);
		}
};

int main()
{
	Solution sol;

	vector<int> nums = {11,11,40,11,40,59};
	cout << sol.containsDuplicate(nums);
	/*
	Display duplicate number in n times
	for (int i = 0; i < nums.size(); i++)
			{
				if (m[nums[i]] <= 1)
					continue;
				cout << nums[i] << ": ";
				cout << m[nums[i]] << endl;
				m[nums[i]] = 0;
			}
	*/
}