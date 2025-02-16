// Program to Print Fibonacci Series Upto n Terms
#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, next;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.");
    } else if (n == 1) {
        printf("Fibonacci Series up to %d term: \n", n);
        printf("%d\n", first);  
    } else {
        printf("Fibonacci Series up to %d terms: \n", n);
        printf("%d %d ", first, second);  
        for (i = 3; i <= n; i++) {
            next = first + second;  
            printf("%d ", next);  
            first = second; 
            second = next; 
        }
        printf("\n");
    }
    return 0;
}