#include "stdio.h"
void main(){
	int oe[4]={2,1,3,7};
	int empty;
	int flag=1;
	printf("hi");
	int counter;
	while(flag){
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
			else{counter++;}

		}
	}
	if(counter==3){break;}

}
}
