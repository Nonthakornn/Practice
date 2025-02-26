#include "cpp.h"


void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int *num, int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int i = 0; i < 5 ; i++)
			cout << num[i] << " ";
		int min = i;
		for (int j = i; j <= n - 1; j++)
		{
			if (num[j] < num[min])
				min = j;
		}
		swap(num[min], num[i]);
		cout << endl;
	}


}

int main()
{
	int num[] = {9, 1, 3, 5, 6};
	selectionSort(num, 5);
	// for (int i = 0; i < 5 ; i++)
	// 	cout << num[i] << " ";
}