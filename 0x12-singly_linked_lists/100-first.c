#include <stdio.h>
/**
 * before_main - print something
 * Description: function that print a string
 * before the execution of the main function
 * Return nothing
 */
void before_main(void)
{
	char *s = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";
	
	printf("%s%s", s, s2);
}

