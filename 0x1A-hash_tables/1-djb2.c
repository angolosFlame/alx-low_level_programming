#include "hash_tables.h"

/**
 * A hash function implementing the djb2 algorithm
 * Prototype: unsigned long int hash_djb2(const unsigned char *str);
 * @str: the passed string to the hash funtion
 * returns the computed hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
