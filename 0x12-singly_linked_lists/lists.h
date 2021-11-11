#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
*struct list_s -sinlge linked list
*@str: string
*@len: length of string
*@next: next node point
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
