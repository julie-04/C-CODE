// C Program to Print Number Pattern
// Rhombus Number Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");
        for (int k = 0; k < n; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}
// Right Half Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            printf("%d ", j + 1);
        printf("\n");
    }
    return 0;
}

// Left Half Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 2; j++)
            printf(" ");
        for (int k = 0; k <= i; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}

//  Full Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}

// Inverted Full Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++)
            printf(" ");
        for (int k = 0; k < 2 * (n - i) - 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
}

// Pascal’s Triangle Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        int C = 1; 
        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
