#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	struct ListNode *l1 = headA;
	struct ListNode *l2 = headB;

	while (l1 != l2)
    {
        if (l1)
            l1 = l1->next;
        else
            l1 = headB;

        if (l2)
            l2 = l2->next;
        else
            l2 = headA;
    }
    return (l1);
}

/*
l1 = 4,    l2 = 5
l1 = 1,    l2 = 6
l1 = 8,    l2 = 1
l1 = 4,    l2 = 8
l1 = 5,    l2 = 4
l1 = NULL, l2 = 5
l1 = 5 (switched to headB), l2 = NULL
l1 = 6,    l2 = 4 (switched to headA)
l1 = 1,    l2 = 1
l1 = 8,   l2 = 8 (They meet at intersection)
*/

struct ListNode *ft_lstnew(int num)
{
	struct ListNode *new_node;
	new_node = malloc(sizeof(struct ListNode));
	new_node->val = num;
	new_node->next = NULL;
	return (new_node);
}

struct ListNode *find_last_node(struct ListNode *head)
{
	if (!head)
		return NULL;
	while (head->next)
		head = head->next;
	return (head);
}

void add_back(struct ListNode **head, struct ListNode *new_node)
{
	struct ListNode *last_node;

	if (!(*head))
		*head = new_node;
	else
	{
		last_node = find_last_node(*head);
		last_node->next = new_node;
	}
}

void prin_list(struct ListNode *head)
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
	int A[] = {4,1,8,4,5};
	int B[] = {5,6,1,8,4,5};
	struct ListNode *headA = NULL;
	struct ListNode *headB = NULL;
	struct ListNode *share = NULL;

	int sizeA = sizeof(A) / sizeof(A[0]);
	int sizeB = sizeof(B) / sizeof(B[0]);

	for (int i = 0; i < 2; i++)
	{
		struct ListNode *new_node = ft_lstnew(A[i]);
		add_back(&headA, new_node);
	}
	for (int i = 0; i < 3; i++)
	{
		struct ListNode *new_node = ft_lstnew(B[i]);
		add_back(&headB, new_node);
	}

	printf("Not Share memory yet\n");
	prin_list(headA);
	prin_list(headB);

	printf("\nShare memory\n");
	for (int i = 2; i < sizeA; i++)
	{
		struct ListNode *new_node = ft_lstnew(A[i]);
		add_back(&share, new_node);
	}
	find_last_node(headA)->next = share;
	find_last_node(headB)->next = share;
	prin_list(headA);
	prin_list(headB);

	struct ListNode *interNode = getIntersectionNode(headA, headB);
	printf("Intersect Number: %d", interNode->val);

}
    
