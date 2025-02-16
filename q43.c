// C Program To Print Character Pyramid Pattern
// Half Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}

// Inverted Half Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5; 
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }

    return 0;
}

// Full Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++)
            printf("%c ", 'A' + k);
        printf("\n");
    }
    return 0;
}

// Hollow Pyramid Pattern
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == n - 1)
                printf("%c ", k + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Diamond Pyramid Pattern
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++) {
        int comp;
        if (i < n)
            comp = 2 * (n - i) - 1;
        else
            comp = 2 * (i - n + 1) + 1;
        for (int j = 0; j < comp; j++)
            printf(" ");
        for (int k = 0; k < 2 * n - comp; k++)
            printf("%c ", k + 'A');
        printf("\n");
    }
    return 0;
}
