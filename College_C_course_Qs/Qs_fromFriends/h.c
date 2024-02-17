#include <stdio.h>
int main()
{	int a,y,m,d;
	scanf("%d",&a);
	y = a/365;
	m = (a%365)/30;
	d =	(a%365)%30;

	printf("%d years\n%d months\n%d days",y,m,d);
	return 0;
}