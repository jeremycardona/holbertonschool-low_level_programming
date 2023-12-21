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
	hash_node_t *ts;

	ts = malloc(sizeof(hash_node_t *));
	if (!ts)
	{
		free(ts);
		return (NULL);
	}

	t = malloc(sizeof(hash_table_t *) * (size + 1));
	if (!t)
	{
		free(ts);
		free(t);
		return (NULL);
	}

	/*
	*
	//t.next = node;
	//node = node->value = 'J';
	*
	*/
	ts->key = "1";
	ts->value = "one";
	ts->next = NULL;
	t->size = size;
	t->array = &ts;
	return (t);
}
