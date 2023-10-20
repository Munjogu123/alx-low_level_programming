#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return either a positive, negative or 0 number
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag, pos, neg, same;

	pos = 15;
	neg = -15;
	same = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			flag = 1;
			break;
		} else if (s1[i] > s2[i])
		{
			flag = 2;
			break;
		} else if (s1[i] == s2[i])
		{
			flag = 3;
			break;
		}
	}
	if (flag == 1)
		return (neg);
	else if (flag == 2)

		return (pos);

	return (same);


}
