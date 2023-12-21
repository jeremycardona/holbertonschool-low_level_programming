/**
 * hash_djb2 - hash function implementation
 * Description: function that implements the djb2 algor.
 * Return: hash positive long int
 * @str: key
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	unsigned int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
