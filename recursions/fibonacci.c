#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n); /*Declaring function prototype */

/**
  * print_fibonacci - prints the Fibonacci sequence from 0 - n
  * @n: given number of Fibonacci elements to print
  *
  * Return: void
  */

void print_fibonacci(int n)
{
	static int n1 = 0, n2 = 1;
	int n3;

	if (n > 1)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		printf(", %d", n3); /*prints the series normally */

		print_fibonacci(n - 1); /* recursive call */

		printf(" %d, ", n3); /*prints the series in reverse */
	}	
}

/**
  * main - Entry point
  *
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int n;

	if (argc > 1)
	{
		n = atoi(argv[1]);

		printf("Function Start =============\n\n");

		printf("0, 1");

		print_fibonacci(n);

		printf("\n\n Function End =============\n\n");
	}
	return (0);
}
