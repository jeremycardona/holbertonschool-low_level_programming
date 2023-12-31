/**
 * print_name - prints a name
 * Description: function that prints a name
 * @name: string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
