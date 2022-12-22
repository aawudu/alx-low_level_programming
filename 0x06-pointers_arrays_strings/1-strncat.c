#include "main.h"
/**
 * _strncat - function to concat string
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Find the end of the destination string */
	int dest_len = strlen(dest);
	/* Append at most n bytes from src to dest */
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	/* Add null terminator to the end of the destination string */
	dest[dest_len + i] = '\0';
	/* Return a pointer to the resulting string dest */
	return (dest);
}
