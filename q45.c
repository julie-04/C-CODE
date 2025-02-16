// C Program To Print Hollow Pyramid Patterns
// Hollow Right Half Pyramid
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Left Half Pyramid
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Full Pyramid
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Diamond Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++) {
        int l;
        if (i < n) l = 2 * (n - i) - 1;
        else l = 2 * (i - n + 1) + 1;
        for (int j = 0; j < l; j++)
            printf(" ");
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

