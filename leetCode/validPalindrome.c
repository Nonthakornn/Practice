#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char* s)
{
	char *arr = malloc(strlen(s) + 1);
    int i = 0;
	int index = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
				arr[index] = s[i];
				index++;
			}
			else
			{
				arr[index] = s[i];
				index++;
			}
		}
		i++;
	}
	arr[index] = '\0';
	i = 0;
	index--;
	while (index >= 0)
	{
		if (arr[i] != arr[index])
			return (false);
		i++;
		index--;
	}
	return (true);
}


int main()
{
	int i = 0;
	// char s[] = "A man, a plan, a canal: Panama";
	char s[] = "0P";
	printf("%d", isPalindrome(s));

}