#include <stdio.h>
int main()
{	int x[4],transact;
	scanf("%d %d %d %d",&x[0],&x[1],&x[2],&x[3]);
	for(int j=0;j<4;j++){
	for(int i=0;i<4;i++){
	    
	if(x[i]>x[i+1] & i!=3){
	    transact=x[i+1];
	    x[i+1]=x[i];
		x[i]=transact;
		}
	    
	    
	}
	}
		printf("%d %d",x[0],x[3]);
	return 0;
}