#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - dertermines if a number is posetive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	    printf("%d is posetive\n", n);
        {
        else if (n == 0)
        {
            printf("%d is zero\n", n);
        }
        else
	{
	    printf("%d is negative\n", n);
        }
        return (0);	
