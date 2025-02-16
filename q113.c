// C Program For Octal to Decimal Conversion octal to decimal using format specifier
#include <stdio.h>
int main()
{
	int n;
	printf("Enter an Octal number: \n");
	scanf("%o", &n);
	printf("\nDecimal Representation is: %d", n);
	return 0;
}