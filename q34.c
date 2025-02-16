// C Program to Display Prime Numbers Between Interval
#include <stdio.h>
int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0; 
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
int main() {
    int lower, upper, i;
    printf("Enter the lower limit of the interval: ");
    scanf("%d", &lower);
    printf("Enter the upper limit of the interval: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are: \n", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}