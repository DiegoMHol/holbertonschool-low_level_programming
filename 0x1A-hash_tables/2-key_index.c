#include "hash_tables.h"
/**
 *key_index -Function that gives the index of key
 *@key: key to find index
 *@size: size of array
 *Return: return index of kay
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
