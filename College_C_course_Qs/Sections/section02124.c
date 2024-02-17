#include <stdio.h>
int in(int a,int x[],int n){
	for(int i=0;i<n;i++){
		if(a==x[i]){
			return 1;
		}
	}

return;

}

int count(int a,int x[],int n){
	int counter=0;
	for(int i=0;i<n;i++){
		if(a==x[i])
			{	counter++;
			}
	}
return counter;
}
void main(){
	int counter=0;
	int x[4]={0,1,2,3};
	int y[4]={2,1,0,3};
	int all[(sizeof(x)/4)+(sizeof(y)/4)];
	int j = 0;
	int supercounter=0;
	for(int i=0;i<(sizeof(x)/4);i++){
		if(in(x[i],y,sizeof(x)/4)){
			counter=count(y[i],x,sizeof(x)/4)+count(x[i],y,sizeof(x)/4);
			supercounter+=counter;
			for(;j<supercounter;j++){
				all[j]=x[i];
			}

		}

	}
for(int i=0;i<(sizeof(all)/4);i++){
	printf("%d ",all[i] );
}
}
