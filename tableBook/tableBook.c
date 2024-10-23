//Author - Vedika Udgir

#include <stdio.h>
#include <conio.h>

void main()
{
    float n;
    printf("Enter any number to gets it's multples upto 20. (fractional values are also allowed.)\n");
    scanf("%f",&n);

    for ( int i = 1; i <= 20; i++)
    {
        printf("\n%g x %i = %g ",n, i, n*i);
    }

}