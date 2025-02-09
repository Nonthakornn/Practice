#include <stdio.h>
#include <stdlib.h>

typedef struct MyLinkedList{
	int val;
	struct MyLinkedList *next;
} MyLinkedList;

MyLinkedList* myLinkedListCreate()
{
	MyLinkedList *new_node = malloc(sizeof(MyLinkedList));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	return (new_node);
}

int myLinkedListGet(MyLinkedList* obj, int index)
{
	MyLinkedList *curr = obj->next;
	int i = 0;

	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (!curr)
		return (-1);
	return (curr->val);
    
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val)
{
	MyLinkedList *new_node = malloc(sizeof(MyLinkedList));
	new_node->val = val;
	new_node->next = obj->next;
	obj->next = new_node;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val)
{
	MyLinkedList *ptr = obj;

	while (ptr->next)
		ptr = ptr->next;
	MyLinkedList *new_node = malloc(sizeof(MyLinkedList));
	new_node->val = val;
	new_node->next = NULL;
	ptr->next = new_node;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val)
{
	MyLinkedList *curr = obj;
    int i = 0;
    
    while (curr && i < index)
    {
        curr = curr->next;
        i++;
    }
    if (!curr)
        return;
    MyLinkedList *new_node = malloc(sizeof(MyLinkedList));
    new_node->val = val;
    new_node->next = curr->next;
    curr->next = new_node;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index)
{
	MyLinkedList *curr = obj;
    int i = 0;
    
    while (curr && i < index)
    {
        curr = curr->next;
        i++;
    }
    if (!curr || !curr->next)
        return;
    MyLinkedList *temp = curr->next;
    curr->next = temp->next;
    free(temp);
    
}

void myLinkedListFree(MyLinkedList* obj)
{
	MyLinkedList *ptr = NULL;

	while (obj)
	{
		ptr = obj;
		obj = obj->next;
		free(ptr);
	}
}

void display(MyLinkedList *head)
{
	MyLinkedList *ptr = head->next;
	while (ptr)
	{
		printf("%d ", ptr->val);
		ptr = ptr->next;
	}
}

int main()
{
	MyLinkedList *head = NULL;

	head = myLinkedListCreate();
	myLinkedListAddAtTail(head, 20);
	myLinkedListAddAtTail(head, 30);
	myLinkedListAddAtHead(head, 40);
	display(head);
	myLinkedListFree(head);
}
