#include "cpp.h"

class Solution {
public:
	void countFrequency(int *arr, int n)
	{
		vector<bool> visited(n, false);

		for (int i = 0; i < n; i++)
		{
			if (visited[i] == true)
				continue;
			int count = 1;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					visited[j] = true;
					count++;
				}
			}
			cout << arr[i] << " " << count << endl;
		}
	}

	void Frequency(int arr[], int n)
	{
		unordered_map<int, int> map;
	
		for (int i = 0; i < n; i++)
			map[arr[i]]++;
	
		// Traverse through map and print frequencies
		for (auto it : map)
			cout << it.first << " " << it.second << endl;
	}

};

int main()
{
	Solution solution;

	int arr[] = {10,5,10,15,10,5};
	// solution.countFrequency(arr, 6);
	solution.Frequency(arr, 5);
}