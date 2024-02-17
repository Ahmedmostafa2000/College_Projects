#include "stdio.h"
int main(){
	int n,smallest,num=1;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	smallest=arr[0];
	for(int i=0;i<n;i++){
	    
		if(smallest>arr[i+1]&&i!=n-1){
			smallest = arr[i+1];
			num=i+2;

		}
	}
	printf("%d %d",smallest,num );



	return 0;
}