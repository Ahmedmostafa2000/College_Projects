#include "stdio.h"
void main(){

	int y = 7;
	int *x = &y;
	*x = 8;
	printf("%d %d %d %d\n",y,&y,x,*x );//*x is derefrencing
	//*(x+1)=10;
	printf("%d ",*(x+1) );//*x is derefrencing

}
