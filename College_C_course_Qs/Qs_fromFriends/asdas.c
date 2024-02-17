#include "stdio.h"
// int mul(int x[],int y[],int n){
	
// 	return sum;
// }
void main(){
	int x[2]={3,2};
	int y[2]={2,3};
	int sum=0;
	for(int i=0;	i<2	;	i++){
		printf("%d\n",i );
		sum += x[i]*y[i];
		printf("%d %d\n",x[i],y[i] );
	}
	printf("%d\n",sum ); 
}