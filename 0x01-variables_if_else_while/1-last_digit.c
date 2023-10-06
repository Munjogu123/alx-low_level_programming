#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *last_num - gets the last digit of a number
 *if - checks the last digit of a number
 *
 *Return: always return 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	else if (last_num < 6 && last_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	return (0);
}
