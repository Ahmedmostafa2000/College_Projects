#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c,root,sol1,sol2;
	scanf("%d %d %d",&a,&b,&c);

	root = b*b - (4*a*c);
	if (root<0){
		printf("No solution");
	}
	else{
		sol1=(-b+sqrt(root))/(2*a);
		sol2=(-b-sqrt(root))/(2*a);
		printf("%d %d\r",sol1,sol2 );
	}


}
