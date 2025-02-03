#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
 };
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode *third = NULL;
	struct ListNode *last = NULL;
	if (!list1) return list2;
    if (!list2) return list1;

	if (list1->val < list2->val)
	{
		third = last = list1;
		list1 = list1->next;
		last->next = NULL;
	}
	else
	{
		third = last = list2;
		list2 = list2->next;
		last->next = NULL;
	}

	while (list1 && list2)
	{
		if (list1->val < list2->val)
		{
			last->next = list1;
			last = list1;
			list1 = list1->next;
			last->next = NULL;
		}
		else
		{
			last->next = list2;
			last = list2;
			list2 = list2->next;
			last->next = NULL;
		}
	}
	if (list1)
		last->next = list1;
	else
		last->next = list2;
	return (third);
}

void display(struct ListNode *head)
{
	while (head)
	{
		printf("%d ", head->val);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	struct ListNode *list1 = malloc(sizeof(struct ListNode));
	struct ListNode *node1 = malloc(sizeof(struct ListNode));
	struct ListNode *node2 = malloc(sizeof(struct ListNode));

	list1->val = 1;
	node1->val = 2;
	node2->val = 4;
	list1->next = node1;
	list1->next->next = node2;
	list1->next->next->next = NULL;

	struct ListNode *list2 = malloc(sizeof(struct ListNode));
	struct ListNode *node3 = malloc(sizeof(struct ListNode));
	struct ListNode *node4 = malloc(sizeof(struct ListNode));

	list2->val = 1;
	node3->val = 3;
	node4->val = 4;
	list2->next = node3;
	list2->next->next = node4;
	list2->next->next->next = NULL;

	display(list1);
	display(list2);
	struct ListNode *result = mergeTwoLists(list1, list2);
	display(result);

}