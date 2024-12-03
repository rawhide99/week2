/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter the number of rows and columns in 2D array.\n");
    scanf("%d %d", &i, &j);
    
    int arr[i][j];
    printf("Enter the elements to store in 2D array.\n");
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            scanf("%d", &arr[x][y]);
        }
    }
    
    printf("Printing the elements of 2D array.\n");
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < j; y++)
        {
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
