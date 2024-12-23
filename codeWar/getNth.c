#include <stdlib.h>
#include <stdio.h>

struct List{
	int data;
	struct List *next;
};

struct List *get_nth_node(const struct List *list, size_t n)
{
	size_t i = 0;
	struct List *ptr = (struct List *)list;

	if (!list)
		return NULL;
	while (i < n && ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

int main()
{
	struct List *node1 =  malloc(sizeof(struct List));
	struct List *node2 =  malloc(sizeof(struct List));
	struct List *node3 =  malloc(sizeof(struct List));
	struct List *nthNode;

	node1->data = 10;
	node2->data = 20;
	node3->data = 30;

	node1->next = node2;
	node1->next->next = node3;
	node1->next->next->next = NULL;

	nthNode = get_nth_node(node1, 1);
	printf("%d ", nthNode->data);
	free(node1);
	free(node2);
	free(node3);
}