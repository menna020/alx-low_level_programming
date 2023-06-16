#include <stdio.h>

/**
 * main - prints the sizeof many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char: %1u byte(s)\n", sizeof(a));
printf("size of an int: %1u byte(s)\n", sizeof(b));
printf("size of a long int: %1u byte(s)\n", sizeof(c));
printf("size of a long long int: %1u byte(s)\n", sizeof(d));
printf("size of a float: %1u byte(s)\n", sizeof(e));
return (0);
}
