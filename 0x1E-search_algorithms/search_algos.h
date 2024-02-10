#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - This is a singly linked list
 * @n: This is an integer
 * @index: This is an index of the node in the list
 * @next: This is a pointer to the next node
 * Description: This is a singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - This is a Singly linked list with an express lane
 *
 * @n: Is an integer
 * @index: This is an index of the node in the list
 * @next: This is the pointer to the next node
 * @express: This is the pointer to the next node in the express lane
 *
 * Description: This is a singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
