#include <stdio.h>

/**
 * main - entry point
 * @argc: size of the array argv
 * @argv: array of arguments
 *
 * Description: this function print all the argument of the programme
 * Return: zero for succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

