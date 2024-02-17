//
// Created by Mm on 1/3/2020.
//
#include "stdio.h"
int main(){
    long long n;
    scanf("%lli",&n);
    char x[n];
    scanf("%s",x);
    for(int i=0;i<n;i++)
        printf("%c\n",x[i]);
    return 0;

}