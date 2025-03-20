#include "c.h"

int is_space(char c)
{
	return (c == 32);
}

int lengthOfLastWord(char* s)
{
	int i = 0;
	int count = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0 && s[i] && is_space(s[i]))
		i--;
	while(i >=0 && s[i] && !is_space(s[i]))
	{
		count++;
		i--;
	}
	return (count);
}

int main()
{
	// printf("%d", lengthOfLastWord("Hello World"));
	printf("%d", lengthOfLastWord("a"));
}