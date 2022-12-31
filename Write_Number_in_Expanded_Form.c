#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Given a number the function will return it as a string in Expanded Form. For example:
    expandedForm 42    -- Should return '40 + 2'
    expandedForm 70304 -- Should return '70000 + 300 + 4'

*/
char *expandedForm(char *string, unsigned long long n)
{
	char *ef[20];
    int i = 0;
    unsigned long long b = 1;
    unsigned long long number;

    while (n)
    {   
        char *nPtr = calloc (10, sizeof(char));
        number = n % 10;
        number *= b;
        b *= 10;

        if (number)
        {
            sprintf(nPtr, "%llu", number);
            ef[i++] = nPtr;
        }

        n /= 10;
    }        
    
    strcat(string, ef[i - 1]);
    for (int j = i - 2; j >= 0; j--)
    {
        strcat(string, " + ");
        strcat(string, ef[j]);
    }    
    
	return string;
}


int main(void)
{
    char *ptr = calloc (1000, sizeof(char));
    expandedForm(ptr, 10987);

    printf("%s\n", ptr);

    return 0;
}