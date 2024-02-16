#include "hash_tables.h"

/**
 * hash_table_get - create hash node.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key you are looking for
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (!ht || !key)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp)
{
if (strcmp(temp->key, key) == 0)
{
return (strdup(temp->value));
}
temp = temp->next;
}
return (NULL);
}
