// C Program to Find Factorial of a Number
#include <stdio.h>
long factorial(int n)
{
    long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %ld\n", number, factorial(number));
    return 0;
}