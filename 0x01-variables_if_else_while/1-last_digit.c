#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int t;

	srand(time(0));
	t = rand() - RAND_MAX / 2;

	if ((t % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			t, t % 10);
	}
	else if ((t % 10) < 6 && (t % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			t, t % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			t, t % 10);
	}

	return (0);

}
