#include "stdio.h"
int main(){
	int n,serch,flag=1;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&search);
	for(int i=0;i<n;i++){
		if(arr[i]==search){
			printf("%d",i );
			return 0;
		}
		else{
			flag=0;
		}
	}
	if (!flag)
	{
		printf("%d",-1 );
	}
return 0;}