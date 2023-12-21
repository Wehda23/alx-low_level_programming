#include "hash_tables.h"

/**
 * hash_table_create - is a function used to create a hash table
 * @size: Size of the hashtable
 * Return: hash_table_t* pointer to a hashtable or NULL in case of failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (!new)
	{
		return (NULL);
	}
	new->size = size;
	return (new);
}
