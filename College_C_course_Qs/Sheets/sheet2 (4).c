#include "stdio.h"
int main(){
	int a,b;
	float av;
	scanf("%d %d",&a,&b);
	av = (a+b)/2;
	if ((av-(int)av) >0.5)
	{
		printf("%d",(int)av+1 );
	}
	else
		printf("%d",(int)av );

	

return 0;}