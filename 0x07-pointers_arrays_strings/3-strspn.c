#include "main.h"

/**
 * _memset- fill memorie
 * Description: fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: a pointer to s
 */
unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int pos = 0;

	while (s[pos])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		pos++;
	}
	return (pos);
}
