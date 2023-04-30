#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked
 * list in ascending order using insertion
 * algorithm
 * @list: doubly linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
listint_t *curr;
if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;
curr = (*list)->next;
while (curr != NULL)
{
listint_t *brf = curr;
for (; brf->prev != NULL && brf->n < brf->prev->n; brf = brf->prev)
{
brf->prev->next = brf->next;
if (brf->next != NULL)
	brf->next->prev = brf->prev;
brf->next = brf->prev;
brf->prev = brf->next->prev;
brf->next->prev = brf;
if (brf->prev == NULL)
	*list = brf;
else
	brf->prev->next = brf;
print_list(*list);
}
curr = curr->next;
}
}
