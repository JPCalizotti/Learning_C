/*
    Determinar se um inteiro é um número Armstrong.
    Um número de Armstrong é um número que,
     é a soma de seus próprios dígitos, cada um elevado à potência do número de dígitos.
*/

#include <stdio.h>
#include <math.h>

int is_armstrong_number(int candidate)
{
    int copy = candidate;
    int sum = 0;
    int amountDigits = 1;

    for (size_t i = 10; i <= candidate; i *= 10)
    {
        amountDigits++;
    }
    
    while (candidate)
    {
        sum += pow((candidate % 10), amountDigits);
        candidate /= 10;
    }

    return copy == sum ? 1 : 0;
    
}

int main(void){

    int number;
    scanf("%d", &number);

    printf("%d\n", is_armstrong_number(number));

    return 0;
}