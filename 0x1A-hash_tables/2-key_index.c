#include "hash_tables.h"

/**
 * A function that gives you the index of a key.
 * Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
 * where key is the key and size is the size of the array of the hash table
 * This function uses the hash_djb2 function written earlier in task 1 above
 * Returns the index at which the key/value pair should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
