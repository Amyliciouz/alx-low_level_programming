#include "hash_tables.h"
/**
 *  *key_index - index form 0 - size
 *   *@key: key
 *    *@size: size of array index
 *     *Return: real index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
