#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - function that micks the insertation sort
 * @list: double linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp2;

	if (list == NULL)
		return;

	temp = *list;

	while (temp)
	{
		while (temp->next && (temp->n > temp->next->n))
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			temp2->prev = temp->prev;

			if (temp->prev)
				temp->prev->next = temp2;

			if (temp2->next)
				temp2->next->prev = temp;

			temp->prev = temp2;
			temp2->next = temp;

			if (temp2->prev)
				temp = temp2->prev;
			else
				*list = temp2;

			print_list(*list);
		}
		temp = temp->next;
	}
}
