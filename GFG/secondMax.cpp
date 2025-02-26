#include "cpp.h"

class Solution {
	public:
	  int getSecondLargest(vector<int> &arr) {
		int large = INT_MIN;
		int second_large = INT_MIN;

		for(int i = 0; i < arr.size(); i++)
		{
			large = max(large, arr[i]);
		}
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] > second_large && arr[i] != large)
				second_large = arr[i];
		}
		if (second_large == INT_MIN)
			return (-1);
		return (second_large);
	  }
};


int main()
{
	Solution solution;

	vector <int> arr =  {10 , 10 , 10};
	int result = solution.getSecondLargest(arr);
	cout << result << endl;
}