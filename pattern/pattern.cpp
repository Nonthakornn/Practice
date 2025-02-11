#include <iostream>

using namespace std;

void rectangular_star(int n)
{
	for (int i = 0 ; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void right_anged_triangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void right_angled_number(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << j + 1;
		}
		cout << endl;
	}
}

void right_angled_numberII(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

void invert_right_pyramid(int n)
{
	/* method 1 but not clean
	int x = n;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		n--;
		cout << endl;
	}
	*/

	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

}

void invert_number_right_pyramid(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

void star_pyramid(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		cout << endl;
	}
}

void invert_star_pyramid(int n)
{
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0;  j < i ; j++)
			cout << " ";
		for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
			cout << "*";
		for (int j = 0;  j < i ; j++)
			cout << " ";
		cout << endl;
	}
}

void diamod_star(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
			cout << "*";
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << endl;
	}
}

void half_diamond_star(int n)
{
	/*
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i ; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i ; j--)
			cout << "*";
		cout << endl;
	}
	*/

	for (int i = 1; i <= (2 * n - 1); i++)
	{
		int star = i;
		if (i > n)
			star = 2 * n - i;
		for (int j = 1; j <= star; j++)
			cout << "*";
		cout << endl;
	}
}

void binary_number_triangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		int start = 1;
		if (i % 2 == 0) start = 1;
		else start = 0;
		for (int j = 0; j <= i ; j++)
		{
			cout << start;
			start = 1 - start;
		}
		cout << endl;
	}
}

void number_crown_pattern(int n)
{
	int space = 2 * (n - 1);
	for (int i = 1; i <= n; i++)
	{
		//number
		for (int j = 1; j <= i; j++)
			cout << j;
		//space
		for (int j = 1; j <= space; j++)
			cout << " ";
		//number
		for (int j = i; j >= 1; j--)
			cout << j;
		space -= 2;
		cout << endl;
	}
}

void increase_number_triangle(int n)
{
	int count = 1;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j <= i ; j++)
		{
			cout << count << " ";
			count++;
		}
		cout << endl;
	}
}

void increasing_letter_trinangle(int n)
{
	char letter = 'A';

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << letter << ' ';
			letter++;
		}
		cout << endl;
		letter = 'A';
	}
}

void reverse_letter_triangle(int n)
{
	char letter = 'A';

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << letter << " ";
			letter++;
		}
		cout << endl;
		letter = 'A';
	}
}

void alpha_ramp_pattern(int n)
{

	char ch = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ch << " ";
		}
		ch++;
		cout << endl;
	}

}

void alpha_hill_pattern(int n)
{

	for (int i = 0; i < n; i++)
	{
		char ch = 'A';
		int breakpoint = (2 * i + 1) / 2;
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i + 1; j++)
		{
			cout << ch;
			if (j <= breakpoint) ch++;
			else ch--;
		}
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		cout << endl;
	}

}

void alpha_triangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		char ch = ('A' + n - 1) - i;
		for (int j = 0; j <= i; j++)
		{
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}
}

void symmetric_void(int n)
{
	int space = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < space; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		space += 2;
		cout << endl;
	}
	int rev_space = space - 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		for (int j = 0; j < rev_space; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		rev_space -= 2;
		cout << endl;
	}
}

void symmetric_butterfly(int n)
{
	int space = 2 * n - 2;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		int star = i;
		if (i > n) star = 2 * n - i;
		for (int j = 1; j <= star; j++)
			cout << "*";
		for (int j = 1; j <= space; j++)
			cout << " ";
		for (int j = 1; j <= star; j++)
			cout << "*";
		cout << endl;
		if (i < n) space -= 2;
		else space += 2;
	}
}

void hollow_rectangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void number_pattern(int n)
{
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			int top = i;
			int left = j;
			int right = (2 * n - 2) - j;
			int down = (2 * n -2 ) - i;
			cout << (n - min(min(top, down), min(left,right)));
		}
		cout << endl;
	}
}
