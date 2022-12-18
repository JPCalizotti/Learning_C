/*
    A função square_digits recebe um número inteiro, eleva cada um dos seus digitos ao quadrado
    e os concatena.
*/


#include <stdio.h>

unsigned long long square_digits (unsigned n)
{
    int r;
    long long m = 1;
    unsigned long long number = 0;

    r = n % 10;
    number += r * r;
    n /= 10;

    while (n)
    {
        if (r >= 0 && r <= 3)
        {
            m *= 10;
        } else {
            m *= 100;
        }
        
        r = n % 10;
        number += m * (r * r);
        n /= 10;
    }
    
	return number;
}

int main(void){

    unsigned  test;
    
    while (scanf("%u", &test) != EOF)
    {
        printf("%lld\n", square_digits(test));
    }

    return 0;
}