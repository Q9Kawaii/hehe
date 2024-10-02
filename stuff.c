#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    do {
        printf("\nMenu:\n");
        printf("1. Read the numbers\n");
        printf("2. Addition\n");
        printf("3. Subtraction\n");
        printf("4. Multiplication\n");
        printf("5. Division\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                break;
            case 2:
                result = num1 + num2;
                printf("Addition: %.2f\n", result);
                break;
            case 3:
                result = num1 - num2;
                printf("Subtraction: %.2f\n", result);
                break;
            case 4:
                result = num1 * num2;
                printf("Multiplication: %.2f\n", result);
                break;
            case 5:
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("Division: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}






#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}







#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}







#include <stdio.h>

int main() {
    int num, reversed = 0, originalNum, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversed) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}











#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}













#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    
    // Step 2: Get the dimensions of the matrices from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Step 3: Dynamically allocate memory for matrices A, B, and C
    int **matrixA = (int **)malloc(rows * sizeof(int *));
    int **matrixB = (int **)malloc(rows * sizeof(int *));
    int **matrixC = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrixA[i] = (int *)malloc(cols * sizeof(int));
        matrixB[i] = (int *)malloc(cols * sizeof(int));
        matrixC[i] = (int *)malloc(cols * sizeof(int));
    }

    // Step 4: Get the elements of matrix A from the user
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Step 4: Get the elements of matrix B from the user
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Step 5: Perform element-wise addition of matrices A and B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Step 6: Display the resultant matrix (Matrix C)
    printf("Resultant Matrix (A + B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrixC[i][j]);
        }
        printf("\n");
    }

    // Step 7: Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrixA[i]);
        free(matrixB[i]);
        free(matrixC[i]);
    }
    free(matrixA);
    free(matrixB);
    free(matrixC);

    return 0;
}












