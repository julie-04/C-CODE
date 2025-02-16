// C Program to Find the Length of a String
#include <stdio.h>
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Length of the string is: %d\n", stringLength(str));
    
    return 0;
}


