#include "lists.h"

/**
  * pop_listint - it deletes the head of node of listint_t list.
  * @head: A pointer to the address of the
  *		head of the listint_list.
  * Return: If the linked list is empty - 0.
  *	Otherwise - The head node's data (n).
  */
int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
