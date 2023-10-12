#include <stdio.h>

/**
 * fizzBuzz - prints 1 to 100 recognizing multiples of 3 and 5
 */

void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}else
		{
		printf("%d", i);
		}

		printf(" ");
	}
	printf("\n");
}
