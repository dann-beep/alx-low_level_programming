#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char achar;
	int anint;
	long alongint;
	long long alonglongint;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(anint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alongint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglongint));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
