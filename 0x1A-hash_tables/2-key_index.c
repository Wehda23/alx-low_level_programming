#include "hash_tables.h"


/**
 * key_index - function that gives me index of a key
 * @key: value of the key.
 * @size: size of the array of hash table
 * Return: Unsinged integer which represents the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
