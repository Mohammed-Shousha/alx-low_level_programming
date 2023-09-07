#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: the size of the hash table
 *
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(*table));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(*table->array));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
