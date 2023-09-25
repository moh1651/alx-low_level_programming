#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: The numbers range from 0 to 99, printed as two digits.
 * Combinations are separated by a comma and a space.
 * Combinations are printed in ascending order.
 * 00 01 and 01 00 are considered the same combination.
 * Uses putchar function with a maximum of eight putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int num1, num2;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
/* Print the first two digits */
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
/* Print the separator */
putchar(' ');
/* Print the second two digits */
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
/* Print the comma and space unless it's the last combination */
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
