// Palindrome Number Program in C
#include <stdio.h>
int main() {
    int num, reverse = 0, remainder, originalNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;  
    while (num != 0) {
        remainder = num % 10;            
        reverse = reverse * 10 + remainder;  
        num /= 10;                        
    }

    if (originalNum == reverse) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;
}
