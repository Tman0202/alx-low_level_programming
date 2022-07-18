#include "main.h"
#include <string.h>
/**
 *_memcpy - memory area of srs
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: nomber of area to copy
 *Return: dust
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
