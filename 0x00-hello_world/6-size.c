#include <stdio.h>
/**
 * main - this is th main that prints all of the text
 * Return: is zerio
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeOf(char));
	printf("Size of a int: %lu byte(s)", sizeOf(int));
	printf("Size of a long int: %lu byte(s)", sizeOf(long int));
	printf("Size of a long long int: %lu byte(s)", sizeOf(long long int));
	printf("Size of a float: %lu byte(s)", sizeOf(float));
	return (0);
}
