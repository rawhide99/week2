/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Deleting the duplicate integers in an array.
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements in the array:\n");
    for(int z = 0; z < n; z++) 
    {
        scanf("%d", &arr[z]);
    }
    
    printf("Printing the elements of the array before removing duplicates:\n");
    for(int z = 0; z < n; z++) 
    {
        printf("%d\t", arr[z]);
    }
    printf("\n");
    
    // Remove duplicates
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                
                for (int k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; // Adjust the index to check the new element at this position
            }
        }
    }

    printf("Printing the elements of the array after removing duplicates:\n");
    for(int z = 0; z < n; z++) {
        printf("%d\t", arr[z]);
    }
    printf("\n");

    return 0;
}
