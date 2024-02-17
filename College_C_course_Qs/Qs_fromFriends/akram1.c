	#include "stdio.h"
	int main(){
	int a,empty;
	int arr[a];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}

	for (int j = 0; j < a-1; ++j)
	{

	for(int i=0; i<a-1 ;i++){
		if(arr[i]>arr[i+1]){
			empty=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=empty;}

	}

	}

	for(int i=0;i<a;i++){
		printf("%d ",arr[i] );}
	/*
	for(int i=0;i<a;i++){
		printf("%d ",arr[i] );}
	*/

	

	return 0;
	}