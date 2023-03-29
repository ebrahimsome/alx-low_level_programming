#include "main.h"
/**
 * _stract - concat on 32 strngs
 * @dest: strinh
 * @src: source string
 * return: stuff
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;
	for (i = 0; dest[i] != '\0')
		destlen++;
	for (i = 0; src[i] != '\0')
		srclen++;
	for (i = 0; i < srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
