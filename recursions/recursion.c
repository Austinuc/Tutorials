#include <stdio.h>

/**
  * recursion - Prints a given string in reverse and normal order at the same time
  * @str: input string
  *
  * Return: void
  */

void recursion(char *str)
{
	if (*str != '\0') // check for NULL value which marks the end of the string
	{

		printf("%c\n", *str); // Prints the string in the normal order

		recursion((str + 1)); // recursive call

		printf("%c\n", *str); // Prints the string in reverse order
	}

}


/**
  * main - Passes a user input string from the command line to the recursive function.
  * @argc: command line argument count
  * @argv: an array of strings from the command line argument
  *
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	char *str; // declaring a string pointer variable

	if (argc > 1) //checking for command line input
	{
		str = argv[1]; // assign the first word from command line to str

		printf("Start printing------\n\n");
		
		recursion(str); // calling the recursive function

		printf("\n\nEnd printing --------\n\n");
	}
	return (0);
}
