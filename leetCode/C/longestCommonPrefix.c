#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
	char c;
	int n = 0;

	if (strsSize == 0)
		return "";
	if (strsSize == 1)
		return (strs[0]);

	while ((c = strs[0][n]))
	{
		for (int i = 1; i < strsSize; i++)
		{
			if (strs[i][n] != c)
			{
				strs[0][n] = '\0';
				return (strs[0]);
			}
		}
		n++;
	}
	strs[0][n] = '\0';
	return (strs[0]);
}



int main()
{
	//char *strs[] =  {strdup("flower"), strdup("flow"), strdup("flight")};
	char *strs[] =  {strdup("flow"), strdup("flow"), strdup("flow")};
	char *result = longestCommonPrefix(strs, 3);
	printf("%s", result);

}