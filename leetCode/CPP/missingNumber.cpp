#include "cpp.h"

class Solution {
	public:
		int missingNumber(vector<int>& nums) {
			int j = 1;
			sort(nums.begin(), nums.end());
			if (nums[0] != 0)
				return (0);
			for (j; j < nums.size(); j++)
			{
				if (nums[j] != nums[j - 1] + 1)
					return (nums[j - 1] + 1);
			}
			return (nums[j - 1] + 1);
		}
	};