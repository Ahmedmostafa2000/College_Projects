#include "stdio.h"
#include "incount.c"
void main(){
	int x=count(1,{1,2,3,4,1,21,1},7);
	printf("%d",x );
}