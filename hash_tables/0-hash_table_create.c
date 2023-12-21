#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * Description: function that creates a new hash table in memory.
 * Return: new address for the hash_table
 * @size: table size
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;


	t = malloc(sizeof(hash_table_t *) * (size) + 1);
	if (!t)
	{
		free(t);
		return (NULL);
	}
	/*
	*
	//t.next = node;
	//node = node->value = 'J';
	*
	*/
	t->size = size;
	return (t);
}
