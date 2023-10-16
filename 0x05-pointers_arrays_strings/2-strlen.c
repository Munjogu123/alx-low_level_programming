#include "main.h"

/**
 */
int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
