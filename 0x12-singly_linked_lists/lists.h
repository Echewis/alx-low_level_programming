#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct node - This is the structure that contain string
 * @str: is the sring
 * @len: is the lenght
 * @next: is the address of the next node
 */
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);

#endif
