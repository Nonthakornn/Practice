#include <stdlib.h>
#include <stdio.h>

struct Node {
	struct Node *next;
	int value;
};
// returns the length of the list
size_t list_length (const struct Node *list)
{
  int count = 0;
  while (list)
  {
    count++;
    list = list->next;
  }
	return (count);
}
// returns the number of occurences of search_val in list
size_t list_count (const struct Node *list, int search_val)
{
  int count = 0;
  while (list)
  {
    if (list->value == search_val)
      count++;
    list = list->next;
  }
	return count;
}