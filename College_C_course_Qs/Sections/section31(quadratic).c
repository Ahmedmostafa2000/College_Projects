#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,root,sol1,sol2;
	scanf("%f %f %f",&a,&b,&c);
	root = b*b - 4*a*c;
	if (root<0){
		printf("No solution");
	}
	else{
		sol1=(-1*b+pow(root,.5))/(2*a);
		sol2=(-1*b-pow(root,.5))/(2*a);
		printf("%f %f",sol1,sol2 );
	}

	return 0;
}