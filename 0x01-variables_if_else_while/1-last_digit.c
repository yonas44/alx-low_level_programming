#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
0-positive_or_negative.c int n;
0-positive_or_negative.c int L;
0-positive_or_negative.c char str[] = "Last digit of";

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c L = n % 10;

0-positive_or_negative.c if (L > 5)
0-positive_or_negative.c 0-positive_or_negative.c printf("%s %d is %d and is greater than 5\n", str, n, L);
0-positive_or_negative.c else if (L == 0)
0-positive_or_negative.c 0-positive_or_negative.c printf("%s %d is %d and is 0\n", str, n, L);
0-positive_or_negative.c else if (L < 6)
0-positive_or_negative.c 0-positive_or_negative.c printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

0-positive_or_negative.c return (0);
}
