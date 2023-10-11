#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or NULL if value
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jp, *nd;

	if (list == NULL)
	{
		return (NULL);
	}

	for (nd = jp = list; jp->next != NULL && jp->n < value;)
	{
		nd = jp;
		if (jp->express != NULL)
		{
			jp = jp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jp->index, jp->n);
		}
		else
		{
			while (jp->next != NULL)
			{
				jp = jp->next;
			}
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, jp->index);
	for (; nd->index < jp->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
