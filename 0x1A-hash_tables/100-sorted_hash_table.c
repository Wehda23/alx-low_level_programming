#include "hash_tables.h"




/**
 * shash_table_create - function that creates a hash table.
 * @size: Size of newly created hashtable
 * Return: new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (!new)
	{
		return (NULL);
	}

	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	new->array = malloc(sizeof(shash_node_t) * size);

	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	for (; index < size; index++)
		new->array[index] = NULL;

	return (new);
}


/**
 * create_skey - function creates new key for shash_table_t
 * @key: is the name of key
 * @value: value of the key
 * Return: Pointer to the key.
 */
shash_node_t *create_skey(const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;

	return (new);
}

/**
 * shash_table_set - function that adds/updates element in hash table.
 * @ht: Hash table
 * @key: Key value
 * @value: value inside the key.
 * Return: 1 in case of success otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *prev, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new = create_skey(key, value);

	if (new == NULL)
		return (0);

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}

	current = ht->shead;
	prev = NULL;

	while (current != NULL && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->snext;
	}

	if (prev == NULL)
	{
		new->snext = ht->shead;
		ht->shead = new;
	}
	else
	{
		new->snext = current;
		prev->snext = new;
		ht->stail = current;
	}
	return (1);
}


/**
 * shash_table_get - Retrieve a value associated with key from shashtable.
 * @ht: hashtable
 * @key: value of the key
 * Return: String represents the value of the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{

	shash_node_t *current;

	if (ht != NULL || key != NULL || *key != '\0')
	{
		return (NULL);
	}

	if (ht->shead != NULL)
	{
		current = ht->shead;
	
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->snext;
		}
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints hash table
 */
void shash_table_print(const shash_table_t *ht)
{	
	int count = 0;
	shash_node_t *current;

	if (ht != NULL)
	{
		current = ht->shead;
		
		printf("{");
		while (current != NULL)
		{
			if (count > 0)
				printf(", ");
			count = 1;
			printf("'%s': '%s'", current->key, current-> value);
			current = current->snext;
		}
		printf("}\n");
	}
}
