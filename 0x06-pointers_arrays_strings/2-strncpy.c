#include "main.h"
/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int ta = 0, ba = 0;

	while (src[ba])
	{
		ba++;
	}
	while (ta < n && src[ta])
	{
		dest[ta] = src[ta];
		ta++;
	}
	while (ta < n)
	{
		dest[ta] = '\0';
		ta++;
	}
	return (dest);
}
