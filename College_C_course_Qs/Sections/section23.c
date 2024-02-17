#include <stdio.h>
#include <math.h>
void main()
{	int x;
	scanf("%d",x);
	if(x%2 == 1){// && and     || or	! not 
		printf("odd");
	}
	else{//it maybe written "else printf();"" if there is only one statement
		printf("even");
	}
}