#include "stdio.h"
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2)
		{	
			printf("%d",i );
			if(!((i==n)||(i==n-1))){printf("\n");}
		}
	return 0;

}