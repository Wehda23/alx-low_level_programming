#include "hash_tables.h"




/**
 * create_key - is a function used to create a new node
 * @key: is the name of the key.
 * @value: is the value of the key.
 * Return: a pointer to a newly allocated node
 */
hash_node_t *create_key(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		fprintf(stderr, "Failed to allocate memory\n");
		return (NULL);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - function that adds/updates element in hash table
 * @ht: hash table
 * @key: is they key value of the element.
 * @value: is the value of the key
 * Return: 1 in case of success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	new = create_key(key, value);

	if (new == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
