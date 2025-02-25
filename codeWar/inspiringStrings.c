#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	word_count(char *str, char sep)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == sep)
			in_word = 0;
		else if (*str != sep && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		str++;
	}
	return (count);
}

static char	*fill_word(char *str, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	free_ft_split(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		start;
	int		end;
	char	**arr;

	start = 0;
	end = 0;
	i = 0;
	arr = malloc(sizeof(char *) * (word_count(str, sep) + 1));
	if (!arr)
		return (NULL);
	while (i < word_count(str, sep))
	{
		while (str[end] == sep)
			end++;
		start = end;
		while (str[end] != sep && str[end])
			end++;
		arr[i] = fill_word(str, start, end);
		if (!arr[i])
		{
			free_ft_split(arr);
			return NULL;
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char *longest_word(const char *words)
{
	int i = 0;
	int max = 0;
	char **split_str = ft_split((char *)words, ' ');
	char *max_str = NULL;

	while (split_str[i])
	{
		if (strlen(split_str[i]) >= max)
		{
			max = strlen(split_str[i]);
			max_str = split_str[i];
		}
		i++;
	}
	return (max_str);
}

int main()
{
	char *str = "red whi xae";
	char *longest = longest_word(str);
	printf("%s", longest);
}