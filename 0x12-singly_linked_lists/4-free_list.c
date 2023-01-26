#include <stdlib.h>
#include "lists.h"

/**
  * free_list - a function that frees a list_t list.
  * @head: A pointer to the first node of linked list
  *
  * Return: Always Nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
