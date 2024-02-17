#include "stdio.h"
int main(){

	int n,counter;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);

		if(arr[i]<=10){
			counter++;
		}
		}

for(int i=0;i<n;i++){
	if(arr[i]<=10){
			printf("A[%d] = %d",i,arr[i]);
			if(i!=counter){
			printf("\n");
		}
}}


return 0;
}