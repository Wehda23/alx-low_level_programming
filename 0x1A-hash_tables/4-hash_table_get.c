#include "hash_tables.h"


/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: Hash table
 * @key: Key name.
 * Return: Value inside that key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return(ht->array[index]->value);
}
