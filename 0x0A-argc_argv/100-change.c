#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry function
 * @argc: number of arguments entered.
 * @argv: Array of the arguements entered
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int coins = 0, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
    else if (atoi(argv[1]) < 0)
    {
        printf("%d\n", 0);
    }
	else
	{
		cents = atoi(argv[1]);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}
