#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode *head)
{
	struct ListNode *ptr = head;
	struct ListNode *q = NULL;
	struct ListNode *r = NULL;

	while (ptr)
	{
		r = q;
		q = ptr;
		ptr = ptr->next;
		q->next = r;
	}
	head = q;
	return (head);
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
	struct ListNode *head = malloc(sizeof(struct ListNode));
	struct ListNode *node1 = malloc(sizeof(struct ListNode));
	struct ListNode *node2 = malloc(sizeof(struct ListNode));

	head->val = 1;
	node1->val = 2;
	node2->val = 3;

	head->next = node1;
	head->next->next = node2;
	head->next->next->next = NULL;

	display(head);
	struct ListNode *rev = reverseList(head);
	display(rev);

}