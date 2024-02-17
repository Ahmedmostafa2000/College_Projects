#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    int lines;

    scanf("%d",&lines);
    char nums[lines];
    for (int i = 0; i < lines; ++i)
    {
        scanf("%s",&nums[i]);

    }
    printf("%s",nums);
    }