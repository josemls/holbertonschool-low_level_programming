#include "hash_tables.h"

/**
 * hash_table_delete - fun deletes a hash table
 * @ht: hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *actual;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				actual = tmp;
				tmp = tmp->next;
				free(actual->key);
				free(actual->value);
				free(actual);
			}
		}
	}
	free(ht->array);
	free(ht);
}
