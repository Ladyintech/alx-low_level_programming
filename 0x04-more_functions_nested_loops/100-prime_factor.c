#include <stdio.h>
#include <math.h>

/**
 *main - Prints the largest prime factor of th number  612852475143
Return: Always 0(Success)
/

int main(void)
{
longx, maxf;
long number = 612852475143;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0
{
maxf = number / x
}
}
printf("%ldn/\n", maxf);
return (0);
