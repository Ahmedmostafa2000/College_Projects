#include <stdio.h>
int in(int a,int x[],int n){
	for(int i=0;i<n;i++){
	  		if(a==x[i]){
			return 1;}
		}
	return 0;
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
	int arr[3]={1,2,3};
	printf("%d",1 && in(1,arr,3) );
}