// C Program To Print Inverted Hollow Pyramid Patterns
// Inverted Hollow Right Half Pyramid

#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// Inverted Hollow Left Half Pyramid
#include <stdio.h>

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// Inverted Hollow Full Pyramid
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
