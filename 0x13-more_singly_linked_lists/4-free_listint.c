#include "lists.h"

/**
 * free_listint - Frees listint_t list.
 * @head: A pointer to head of listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
