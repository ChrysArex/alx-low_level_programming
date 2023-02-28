#include "main.h"
/**
 * _strlen - return the length of s
 * @s: The variable to count
 * Return: nothing
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
