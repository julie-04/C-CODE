// C Program to Multiply Two Matrices
#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rowFirst, int colFirst, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    
    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, colSecond);
    
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
