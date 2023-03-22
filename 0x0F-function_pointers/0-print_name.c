/**
 * print_name - prints a name.
 * Description: function that prints a name.
 * @name: The name we want to display
 * @void (*f)(char *): function pointer to a funtion that print the name
 * a certain way
 * @f: the function we will use
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

