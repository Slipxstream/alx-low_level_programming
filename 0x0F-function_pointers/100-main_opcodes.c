#include <stdlib.h>
#include <stdio.h>

/**
 * print_op - print the opcodes
 * @a: address of the main function
 * @n: number of bytes to be printed
 *
 * Return: void
 */
void print_op(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints opcodes of its own mainfunction
 * @argc: number of args
 * @argv: arg array
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_op((char *)&main, n);
	return (0);
}
