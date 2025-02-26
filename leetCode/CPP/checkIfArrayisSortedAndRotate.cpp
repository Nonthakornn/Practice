#include "cpp.h"

class Solution {
public:
	bool check(vector<int>& nums) {
		int count = 0;
		int num_size = nums.size();

		for (int i = 0; i < num_size; i++)
		{
			if (nums[i] > nums[(i + 1) % num_size])
				count++;
		}
		return (count <= 1);
	}
};

/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int num_size = nums.size();

        for (int i = 1; i < num_size; i++)
        {
            if (nums[i] < nums[i - 1])
                count++;
        }
        if (nums[0] < nums[num_size- 1])
            count++;
            
        return (count <= 1);
    }
};
*/