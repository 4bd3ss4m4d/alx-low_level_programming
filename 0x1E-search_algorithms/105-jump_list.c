#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or NULL if value
 * is not present in head or if head is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *elemet, *jmp;
	size_t stp, step_s;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	stp = 0;
	step_s = sqrt(size);
	for (elemet = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		elemet = jmp;
		for (stp += step_s; jmp->index < stp; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
			{
				break;
			}
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			elemet->index, jmp->index);
	for (; elemet->index < jmp->index && elemet->n < value; elemet = elemet->next)
		printf("Value checked at index [%ld] = [%d]\n", elemet->index, elemet->n);
	printf("Value checked at index [%ld] = [%d]\n", elemet->index, elemet->n);
	return (elemet->n == value ? elemet : NULL);
}
