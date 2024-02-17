#include "superc.h"
int main(){
    char x[100]="93 28 830 93 228 40 938 32 45 325";
    strcat(x," ");
    int sum=0,j=0;
    char temp[200];
    for (int i = 0; i < strlen(x); ++i) {
        if(x[i]!=' '){
            temp[j]=x[i];
            j++;
        }
        else{
            printf("%s",temp);
            Sprint();
            sum+=atoi(temp);
            strcpy(temp,"         ");
            j = 0;
        }
    }
    intPrint(sum);
}