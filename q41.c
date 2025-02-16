// C Program to Print Inverted Pyramid 
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            printf("* ");
        printf("\n");
    }
}

// Inverted Left Half Pyramid
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++)
            printf(" ");
        for (int k = 0; k < n - i; k++)
            printf("* ");
        printf("\n");
    }

    return 0;
}

// Inverted Full Pyramid
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
}
