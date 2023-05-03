#include <stdio.h>

/**
 * main - entry point
 * @argc: size of the array argv
 * @argv: array of arguments
 *
 * Description: this function print the number of arguments
 * passed to the programme
 * Return: zero for succes
 */
int main(int argc, char *argv[])
{
	char c = 'a';

	argv[0] = &c;
	printf("%d\n", argc - 1);
	return (0);
}

