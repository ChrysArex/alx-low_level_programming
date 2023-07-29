#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Description: checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 0x17161514;
	char *c = (char *) &i;

	if (*c == 0x14)
		return (1);
	else
		return (0);
}

