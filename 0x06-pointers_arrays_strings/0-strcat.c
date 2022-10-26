#include <stdio.h>
#include "main.h"

/**
 **_strcat - concatenates two strings.
 * @dest : first strings
 * @src : second strings
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}