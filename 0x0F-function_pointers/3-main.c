#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - the entry point
 *
 * Descripition: program that performs simple operations.
 * @argc: number of argument
 * @argv: array of pointer to each argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*res)(int, int);
	int r;

	if ((argc - 1) != 3)
	{
		printf("Error\n");
		exit(98);
	}
	res = get_op_func(argv[2]);
	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = res(a, b);
	printf("%d\n", r);
	return (0);
}
