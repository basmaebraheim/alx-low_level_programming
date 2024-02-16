#include "hash_tables.h"

/**
 * create_hash_node - create hash node.
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: hash node or NULL if failed
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
hash_node_t *node = NULL;

node = malloc(sizeof(hash_node_t));
if (!node)
return (NULL);

node->key = strdup(key);
if (!node->key)
{
free(node);
return (NULL);
}

node->value = strdup(value);
if (!node->value)
{
free(node);
return (NULL);
}
node->next = NULL;
return node;
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *temp;
char *dup_value;

if (!ht || !key || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp)
{
if (strcmp(temp->key, key) == 0)
{
dup_value = strdup(value);
if (!dup_value)
return (0);
free(temp->value);
temp->value = dup_value;
return (1);
}
temp = temp->next;
}
temp = create_hash_node(key, value);
if (!temp)
return (0);
temp->next = ht->array[index];
ht->array[index] = temp;
return (1);
}
