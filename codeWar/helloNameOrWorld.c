#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hello(const char *name)
{
	if (!name || strlen(name) == 0)
		return strdup("Hello, World!");
	int i = 1;

	char *names = strdup(name);
	if (!names)
	{
		free(names);
		return NULL;
	}
	char *result = malloc(strlen("Hello, ") + strlen(names) + 2); //For ! and NULL
	if (names[0] >= 'a' && names[0] <= 'z')
		names[0] -= 32;
	while (names[i])
	{
		if (names[i] >= 'A' && names[i] <= 'Z')
			names[i] += 32;
		i++;
	}
	strcpy(result, "Hello, ");
	strcat(result, names);
	strcat(result, "!");
	free(names);
	return (result);
}

int main()
{
	char *name = "";
	char *greeting = hello(name);
	printf("%s", greeting);
	free(greeting);

}