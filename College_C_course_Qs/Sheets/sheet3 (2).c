#include "stdio.h"
#include "math.h"
int main(){

	int n,element,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&element);
		sum+=element;
	}
	printf("%d",abs(sum) );


return 0;}