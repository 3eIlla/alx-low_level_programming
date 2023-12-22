#include "hash_tables.h"





/**
 * key_index - gives the index of a key
 *
 * @key: key 2 get index for
 * @size: size o z hash table
 *
 * Return: index 4 the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
