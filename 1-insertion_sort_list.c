#include "sort.h"

/**
 * swap - swaps two nodes of
 * doubly linked list
 * @node: node
 * @list: node list
 * Return: pointer to a node
 */

listint_t *swap(listint_t *node, listint_t **list)
{
listint_t *rear, *current;
rear = node->prev;
current = node;
rear->next = current->next;
if (current->next)
	currrent->next->prev = rear;
current->next = rear;
current->prev = rear->prev;
rear->prev = current;
if (current->prev)
	current->prev->next = current;
else
	*list = current;
return (current);
}

/**
 * insertion_sort_list - sort doubly linked list
 * of integers in ascending order using insertion
 * algorithm
 * @list: doubly linked list to be sorted
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
if (list == NULL || (*list)->next == NULL)
	return;
listint_t *node = (*list)->next;
while (node)
{
while ((node->prev) && (node->prev->n > node->n))
{
node = swap(node, list);
print_list(*list);
}
node = node->next;
}
}
