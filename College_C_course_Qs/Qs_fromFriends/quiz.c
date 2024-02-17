#include "stdio.h"
void main(){
	int oe[4]={2,1,3,7};
	int empty;
	int counter=0;
	while(1){
	for(int i=1;i<3;i++){
		if(oe[i]%2==1){
			if(oe[i]<oe[i-1]){
				empty=oe[i];
				oe[i]=oe[i-1];
				oe[i-1]=empty;

			}
			else if(oe[i]<oe[i+1]){
				empty=oe[i];
				oe[i]=oe[i+1];
				oe[i+1]=empty;}
			else{
				counter++;}
			}
			
		else{
			if(oe[i]>oe[i-1]){
				empty=oe[i];
				oe[i]=oe[i-1];
				oe[i-1]=empty;
			}
			else if(oe[i]>oe[i+1]){
				empty=oe[i];
				oe[i]=oe[i+1];
				oe[i+1]=empty;
			}
		}
		}
		if(counter==2){break;}
	}
	
	for(int i=0;i<4;i++){printf("%d ",oe[i]);}


	}

