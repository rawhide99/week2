/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Counting the occurence of a numbers in an array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of your array.\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array.\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Printing the elements of the array.\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    printf("Printing the occurence of every number.\n");
    for(int i = 0; i < n; i++)
    {
        int count = 0, already_counted=0;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                already_counted = 1;
                break;
            }
        }
        
        if (already_counted) continue;
        for(int k = 0; k < n; k++)
        {
            if(arr[i] == arr[k]) 
            {
                count++;
            }
        }
        printf("The occurence of %d : %d\n", arr[i], count);
        count = 0;
    }

    return 0;
}
