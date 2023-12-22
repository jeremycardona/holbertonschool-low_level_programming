#include "hash_tables.h"

/**
 * key_index - get key index
 * Description: function that gives you the index of a key.
 * Return: index at which key/value pair should be stored in struct.
 * @key: k
 * @size: 2d t size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_val;


	if (key)
		index_val = hash_djb2(key);
	if (size)
		index_val = index_val % size;

	return (index_val);
}
