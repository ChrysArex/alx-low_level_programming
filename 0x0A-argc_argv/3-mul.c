#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: size of the array argv
 * @argv: array of arguments
 *
 * Description: this function multiplie two argument given to the programe
 * Return: zero for succes
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

