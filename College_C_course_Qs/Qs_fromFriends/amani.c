#include "superc.h"
void strRevPrint(char str[]){
    int n = strlen(str);
    for(int i=0;i<n;i++)
        printf("%c",str[n-i-1]);
}
int main(){
    char x[] = "Ahmad";
    strRevPrint(x);
}