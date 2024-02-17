//
// Created by Mm on 1/3/2020.
//
#include "stdio.h"
#include "stdlib.h"
//#include "time.h"
int main(){
    long long i ;
    //srand(time(0));
    for(i = 0 ; i<100;i++)
        printf("%d\n",(rand()%11));

    return 0;

}