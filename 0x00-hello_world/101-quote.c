#include <unistd.h>
/**
 * main - write a function that print and that ...
 * Description : u are not allowed to use printf , puts
 * Return: the function should return 1 on sucess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n", 59);
	return (1);
}

