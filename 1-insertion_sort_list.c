#include "sort.h"

/**
 * swap - swap two nodes of
 * doubly linked list
 * @node: node
 * @list: doubly linked list
 * Return: Nothing
 */

void swap(listint_t **node, listint_t **list)
{
listint_t *ptr, *ptr1, *ptr2;
ptr = *node;
if ((*node)->prev == 0)
	*list = (*node)->next;
ptr = ptr2 = *node;
ptr1 = ptr->next;
ptr->next = ptr1->next;
ptr2 = ptr->prev;
ptr->prev = ptr1;
ptr1->next = ptr;
ptr1->prev = ptr2;
if (ptr1->prev)
	ptr1->prev->next = ptr1;
if (ptr->next)
	ptr->next->prev = ptr;
*node = ptr1;
}

/**
 * insertion_sort_list - sort doubly linked list
 * of integers in ascending order using insertion
 * algorithm
 * @list: doubly linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
listint_t *head, *rear, *current;
head = *list;
if (!(head && (head->prev || head->next)))
	return;
while (head && head->next ? true : false)
{
if (head->n > head->next->n)
{
current = head;
swap(&current, list);
print_list(*list);
head = current;
rear = current;
while (rear && rear->prev)
{
if (rear->n < rear->prev->n)
{
current = rear->prev;
swap(&current, list);
print_list(*list);
rear = rear->next;
}
rear = rear->prev;
}
}
head = head->next;
}
}
