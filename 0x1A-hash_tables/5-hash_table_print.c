#include "hash_tables.h"
/**
 * hash_table_print -Print a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	j = 0;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (j)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			j = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
