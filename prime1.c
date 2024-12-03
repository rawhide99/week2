/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//prime_number or not
#include <stdio.h>

int is_prime(int num);

int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d", &n);
    if(n >= 2)
    {
        if(is_prime(n))
            printf("The number %d is a prime number.\n", n);
        else
            printf("The number %d is not a prime number.\n", n);
    }
    else 
        printf("Please enter a number greater than 1 as 1 and 0 are nor prime neither composite.\n");
        printf("Also there are no negative prime numbers.\n");
    
    return 0;
}

int is_prime(int num)
{
    int prime = 0, count = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count = count + 1;
        }
    }
    if (count >= 3)
        return 0;
    else
        return 1;
}
