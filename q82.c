// C program to find Determinant of a matrix
#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    int det = 0;
    int submatrix[10][10];
    
    if (n == 1) {
        return matrix[0][0];
    }
    
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) {
                    continue;
                }
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        
        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, n - 1);
    }
    
    return det;
}

int main() {
    int n;
    int matrix[10][10];
    
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Determinant of the matrix is: %d\n", determinant(matrix, n));
    
    return 0;
}
