#include <stdio.h>
/**
 * main -to print the size of the data types
 *
 * return: always (0) to indicate succesful excecution
 *
 * main - entry point of the program
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu", sizeof(a));
	printf("size pf int: %lu", sizeof(b));
	printf("size of a long int: %lu", sizeof(c));
	printf("size of a long long int: %lu", sizeof(d));
	printf("size oa a float: %lu", sizeof(e));	
	return (0);
}
