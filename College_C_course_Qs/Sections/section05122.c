#include <stdio.h>
int main(){
	int arr[4]={1,2,3,4},arr2[3];
	int counter=0,a = 1;
	for(int i=0;i<4;i++){
		if(i!=a){
			counter++;
			arr2[counter]=arr[i];
			printf("%d\n",arr2[counter]);
		}}
	return 0;
}