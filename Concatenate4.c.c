/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Concatenate the every single characted given in a different variable value using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{  
    int n;
    
    printf("Enter the number of characters to concatenate: ");
    scanf("%d", &n);

    char *arr = (char *)malloc((n + 1) * sizeof(char));
    
    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Character %d: ", i + 1);
        scanf(" %c", &arr[i]); // Note the space before %c to consume any leading whitespace
    }
    arr[n] = '\0';
    printf("Concatenated string: %s\n", arr);

    // Free the allocated memory
    free(arr);

    return 0;
}
