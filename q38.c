// C Program to Print Pyramid Pattern
// Right Half Pyramid Pattern star
#include <stdio.h>
int main() {
    int n = 5;

    // Outer loop for printing rows
    for (int i = 0; i < n; i++) {

        // Inner loop for printing * in each rows
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
// Right Half Pyramid Pattern number
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
// Right Half Pyramid Pattern alphabet
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             printf("%c ", j + 'A');
//         printf("\n");
//     }
//     return 0;
// }
// Left Half Pyramid Pattern star
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//             printf(" ");
//         for (int k = 0; k <= i; k++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// Left Half Pyramid Pattern number
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//             printf(" ");
//         for (int k = 0; k <= i; k++)
//             printf("%d ", k + 1);
//         printf("\n");
//     }
//     return 0;
// }

// Full Pyramid Pattern star
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//             printf(" ");
//         for (int k = 0; k < 2 * i + 1; k++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }
// Full Pyramid Pattern number
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//             printf(" ");
//         for (int k = 0; k < 2 * i + 1; k++)
//             printf("%d ", k + 1);
//         printf("\n");
//     }
//     return 0;
// }

// Inverted Full Pyramid Pattern star
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * i; j++) {
//             printf(" ");
//         }
//         for (int k = 0; k < 2 * (n - i) - 1; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Inverted Full Pyramid Pattern number
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2 * i; j++)
//             printf(" ");
//         for (int k = 0; k < 2 * (n - i) - 1; k++)
//             printf("%d ", k + 1);
//         printf("\n");
//     }
// }

// Diamond Pattern star
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < 2 * n - 1; i++) {
//         int comp;
//         if (i < n) comp = 2 * (n - i) - 1;
//         else comp = 2 * (i - n + 1) + 1;
//         for (int j = 0; j < comp; j++)
//             printf(" ");
//         for (int k = 0; k < 2 * n - comp; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  diamond pattern number
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0; i < 2 * n - 1; i++) {
//         int comp;
//         if (i < n) comp = 2 * (n - i) - 1;
//         else comp = 2 * (i - n + 1) + 1;
//         for (int j = 0; j < comp; j++)
//             printf(" ");
//         for (int k = 0; k < 2 * n - comp; k++) {
//             printf("%d ", k + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }