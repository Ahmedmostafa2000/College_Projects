
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char originText[] = "Welcome to computer world";
char prog[] = "programming";
char comp[] = "computer";
char word[20][20];



int main()
{
    int i=0, j=0;

    for (int k = 0; k < strlen(originText); k++)
    {
        if (originText[k] != ' ')
        {
            word[i][j] = originText[k];
            j++;
        }
        else {
            word[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    for (int d = 0; d <i+1; d++) {
        if (_stricmp(word[d], comp) == 0)
        {
            strcpy(word[d],prog);
        }

        printf("%s ", word[d]);
    }


    return 0;
}

