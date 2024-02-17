#include "stdio.h"
int main(){
    int j;
    scanf("%d",&j);
    for(int i=1;i<=j;i++){
    printf("%d",i);
    if(!(i==j)){
    	printf("\n");
    }
    }
    return 0;
}