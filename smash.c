#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    The smash function will receive a word list and then, 
        will smash them together into a sentence.
*/

char *smash (const char *const words[], size_t nb_words)
{
    char *buffer = NULL;
    int size = nb_words;

    for (size_t i = 0; i < nb_words; i++)
    {
        size += strlen(words[i]);
    }
    
    buffer = calloc(size, sizeof(char));
    if(buffer == NULL) exit(1);

    for (size_t i = 0; i < nb_words; )
    {        
        strcat(buffer, words[i]);
        if (++i < nb_words)
        {
            strcat(buffer, " ");
        }        
    }
    
    return buffer;
}

int main(void){

    const char *word_list[] = {"hello", "world", "this", "is", "great"};

    printf("%s\n", smash(word_list, 5));

    return 0;
}