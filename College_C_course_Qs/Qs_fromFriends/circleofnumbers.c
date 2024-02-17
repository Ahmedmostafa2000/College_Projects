#include <stdio.h>
void main()
{while (5>4){
	int n;
	int x;
	scanf("%d %d", &n,&x);


	int y = (n/2)+x;
	if(y>n){y = (y-n);}
	printf("%d",y);
	printf("", );
};
}