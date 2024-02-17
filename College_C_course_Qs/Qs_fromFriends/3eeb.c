#include "stdio.h"
int x =5;
int y = 6;

#define y x

int main(void){
    y = x;
    printf("%d %d",x,y);
}
