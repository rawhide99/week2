/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum size for matrix dimensions

void mul_matrix(int (*arr1)[MAX], int (*arr2)[MAX], int m, int n, int p);

int main() 
{

    int arr1[MAX][MAX], arr2[MAX][MAX];
    int m, n, p, q;

    printf("Enter the number of rows and columns for the first matrix: \n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the number of rows and columns for the second matrix: \n");
    scanf("%d %d", &p, &q);

    if (n != p) 
    {
        printf("Matrix multiplication not possible: columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }
    

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &arr1[i][j]);
        }
    }


    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    mul_matrix(arr1, arr2, m, n, q);

    return 0;
}

void mul_matrix(int (*arr1)[MAX], int (*arr2)[MAX], int m, int n, int q) {
    int result[MAX][MAX] = {0};


    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }


    printf("Printing the product of the matrices:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
