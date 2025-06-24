#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS], const char* name) {
    printf("Enter elements of %s (%dx%d):\n", name, ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void addSpecificRows(int a[ROWS][COLS], int b[ROWS][COLS], int result[COLS], int rowA, int rowB) {
    for (int j = 0; j < COLS; j++) {
        result[j] = a[rowA][j] + b[rowB][j];
    }
}

void addSpecificCols(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS], int colA, int colB) {
    for (int i = 0; i < ROWS; i++) {
        result[i] = a[i][colA] + b[i][colB];
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], result[ROWS][COLS];
    int rowResult[COLS], colResult[ROWS];
    int choice, rowA, rowB, colA, colB;

    inputMatrix(a, "Matrix A");
    inputMatrix(b, "Matrix B");

    do {
        printf("\nMenu:\n");
        printf("1. Addition of two matrices\n");
        printf("2. Subtraction of two matrices\n");
        printf("3. Multiplication of two matrices\n");
        printf("4. Transpose of a matrix\n");
        printf("5. Addition of specific rows\n");
        printf("6. Addition of specific columns\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(a, b, result);
                printf("Result of addition:\n");
                printMatrix(result);
                break;
            case 2:
                subtractMatrices(a, b, result);
                printf("Result of subtraction:\n");
                printMatrix(result);
                break;
            case 3:
                multiplyMatrices(a, b, result);
                printf("Result of multiplication:\n");
                printMatrix(result);
                break;
            case 4:
                transposeMatrix(a, result);
                printf("Transpose of Matrix A:\n");
                printMatrix(result);
                break;
            case 5:
                printf("Enter the rows to add (row index starts from 0): ");
                scanf("%d %d", &rowA, &rowB);
                addSpecificRows(a, b, rowResult, rowA, rowB);
                printf("Result of adding row %d of Matrix A and row %d of Matrix B:\n", rowA, rowB);
                for (int j = 0; j < COLS; j++) {
                    printf("%d ", rowResult[j]);
                }
                printf("\n");
                break;
            case 6:
                printf("Enter the columns to add (column index starts from 0): ");
                scanf("%d %d", &colA, &colB);
                addSpecificCols(a, b, colResult, colA, colB);
                printf("Result of adding column %d of Matrix A and column %d of Matrix B:\n", colA, colB);
                for (int i = 0; i < ROWS; i++) {
                    printf("%d ", colResult[i]);
                }
                printf("\n");
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }    } while (choice != 7);


}
