#include "hash_tables.h"

/**
 * hash_table_print - function the prints whole hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, keys = 0;

	if (ht != NULL)
	{
		printf("{");
		for (; index < ht->size; index++)
		{

			if (ht->array[index] == NULL)
				continue;
			if (keys > 0)
				printf(", ");
			keys++;
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
		}
		printf("}\n");
	}
}
