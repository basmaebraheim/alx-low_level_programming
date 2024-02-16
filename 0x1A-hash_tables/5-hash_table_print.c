#include "hash_tables.h"

/**
 * hash_table_print - create hash node.
 * @ht: the hash table you want to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;
char flag = 0;

if (!ht || !ht->array)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
flag = 1;
temp = temp->next;
}
}
printf("}\n");
}
