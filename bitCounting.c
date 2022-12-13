/*
    Escreva uma função que receba um inteiro como parametro, e
    returne a quantidade de bits igual a 1, da sua representação em binario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t countBits(unsigned value)
{  
    size_t count = 0;
    unsigned mask = 1 << 31;
    
    for (size_t c = 0; c < 32; c++)
    {
        if (value & mask)
            count++;

        value <<= 1;                    
    }
      
	return count;
}

int main(void)
{

    printf("%d\n", countBits(65000));
     
    return 0;
}