#include <string.h>
#include <stdbool.h>
#include <stdio.h>

bool isAnagram(char* s, char* t) {
    int i = 0;
    int j = 0;
    int Hash[256] = {0};
    if (strlen(s) == strlen(t))
    {
        while (s[i])
        {
            Hash[s[i]]++;
			printf("%c: %d ",s[i], Hash[s[i]]);
            i++;
        }
		printf("\n");
        while (t[j])
        {
            Hash[t[j]]--;
			printf("%c: %d ",t[j], Hash[t[j]]);
            j++;
        }
		printf("\n");
        i = 0;

		for (i = 0; i < 256; i++)
		{
			if (Hash[i] != 0)
				return false;
		}
        return (true);
    }
    else
        return (false);
}


int main()
{
	printf("%d", isAnagram("anagram", "nagaram"));

}