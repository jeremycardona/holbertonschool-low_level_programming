#include <stdio.h>
/**
 * main - print the name of the file it was compiled from
 * Description: print the name of the file using macros
 * Return: success
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
