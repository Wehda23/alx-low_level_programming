#include "hash_tables.h"



/**
 * free_node - function that frees a node
 * @node: node to be freed
 */
void free_node(hash_node_t *node)
{
	hash_node_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
/**
 * hash_table_delete - function that deletes and free hashtable.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht != NULL)
	{
		for (; index < ht->size; index++)
		{
			if (ht->array[index] != NULL)
			{
				free_node(ht->array[index]);
				ht->array[index] = NULL;
			}
		}
		free(ht->array);
		free(ht);
	}
}
