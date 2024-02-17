#include "stdio.h"
void main(){
	char x = getch();
	int oe[4]={2,1,37};
	int empty;
	int flag=1;
	while(flag){
    printf("hi\n");
	for(int i=1;i<4;i++){
		if(oe[i]%2==1){
			if(oe[i]<oe[i-1]){
				empty=oe[i];
				oe[i]=oe[i-1];
				oe[i-1]=empty;

			}
			else if(oe[i]<oe[i+1]){
				empty=oe[i];
				oe[i]=oe[i+1];
				oe[i+1]=empty;


			}
		}
	}
	for(int i=0;i<4;i++){printf("%d ",oe[i]);}


	}
}
