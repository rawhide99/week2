/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void sub_matrix(int (*arr1)[MAX], int (*arr2)[MAX], int p, int q);

int main()
{
    int i, j, p, q;
    printf("Enter the number of rows and columns of 1st 2D array.\n");
    scanf("%d %d", &i, &j);
    
    printf("Enter the number of rows and columns of 2nd 2D array.\n");
    scanf("%d %d", &p, &q);
    
    int arr1[i][MAX];
    int arr2[p][MAX];
    
    if((i == p) && (j == q))
    {
        printf("Enter the elements to store in 1st 2D array.\n");
        for(int x = 0; x < i; x++)
        {
            for(int y = 0; y < j; y++)
            {
                scanf("%d", &arr1[x][y]);
            }
        }
        
        printf("Printing the elements of 1st 2D array.\n");
        for(int x = 0; x < i; x++)
        {
            for(int y = 0; y < j; y++)
            {
                printf("%d\t", arr1[x][y]);
            }
            printf("\n");
        }
        printf("\n");
        
        printf("Enter the elements to store in 2nd 2D array.\n");
        for(int x = 0; x < p; x++)
        {
            for(int y = 0; y < q; y++)
            {
                scanf("%d", &arr2[x][y]);
            }
        }
        
        printf("Printing the elements of 2nd 2D array.\n");
        for(int x = 0; x < p; x++)
        {
            for(int y = 0; y < q; y++)
            {
                printf("%d\t", arr2[x][y]);
            }
            printf("\n");
        }
        printf("\n");
        
        sub_matrix(arr1, arr2, i, j);
    }
    
    else
    {
        printf("The dimensions of both 2D arrays do not match, hence addition and subtraction is not possible.\n");
        return 0;
    }
        

    return 0;
}

void sub_matrix(int (*arr1)[MAX], int (*arr2)[MAX], int p, int q)
{
    int c = p;
    int d = q;
    
    int sum[c][10];
    for(int w = 0; w < c; w ++)
    {
        for(int z = 0; z < d; z++)
        {
            sum[w][z] = arr1[w][z] - arr2[w][z];
        }
    }
    
    printf("Printing the subtraction of Matrix.\n");
        for(int w = 0; w < p; w++)
        {
            for(int z = 0; z < q; z++)
            {
                printf("%d\t", sum[w][z]);
            }
            printf("\n");
        }
        printf("\n");
}
