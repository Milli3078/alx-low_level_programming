#include "main.h" 

/**
 * print_to_98 - Prints all natural number from input to 98, inorder to separate by a space.
 *
 *@n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			prinf("%d, ", n--);
		printf("%d\n", n);
	}
	
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}


