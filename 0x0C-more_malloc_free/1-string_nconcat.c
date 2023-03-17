#include <stdlib.h>
#include "main.h"
/**
 * strl - length
 * Description: find the length of a string
 * @c: the string
 * Return: the length of c
 */
unsigned int strl(char *c)
{
	unsigned int n = 0;

	for (; *c != '\0'; c++)
		n++;
	return (n);
}
/**
 * string_nconcat - concatenates two strings
 * Description: concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of char of s2 we want to display
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ps1 = s1;
	char *ps2 = s2;
	char *ps;
	unsigned int n1, n2, i;

	if (s1 == NULL)
		ps1 = "";
	if (s2 == NULL)
		ps2 = "";
	n1 = strl(ps1);
	if (n >= strl(ps2))
		n2 = strl(ps2);
	else
		n2 = n;
	ps = (char*) malloc(sizeof(char) * (n1 + n2 + 1));
	if (ps == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		*(ps + i) = *(ps1 + i);
	for (i = 0; i < n2; i++)
	{
		*(ps + n1) = *(ps2 + i);
		n1++;
	}
	*(ps + n1) = '\0';
	return (ps);
}
