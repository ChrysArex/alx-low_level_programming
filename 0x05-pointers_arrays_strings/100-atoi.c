#include "main.h"
/**
 *_atoi - convert a string to an integer.
 *@s: the string to convert
 * Return: nothing
 */
int _atoi(char *s)
{
	char *ps = s;
	int si = 1, n = 0;

	for (; *ps != '\0'; ps++)
	{
		if (*ps == '+')
			si *= 1;
		else if (*ps == '-')
			si *= -1;
		if (*ps >= '0' && *ps <= '9')
		{
			n = 10 * n + *ps - '0';
			if (*(ps + 1) < '0' || *(ps + 1) > '9')
				break;
		}
	}
	return (si * n);
}
