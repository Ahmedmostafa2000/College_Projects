#include <stdio.h>
int main()
{	char a[4];
	scanf("%d",&a);
	if(((int)a[0])%2==0)
		printf("EVEN");
	else
		printf("ODD");
	return 0;
}