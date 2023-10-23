#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to get length of substring
 * @accept: string to search the main string for comparison
 *
 * Return: returns the no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (flag);
	}
	return (flag);
}
