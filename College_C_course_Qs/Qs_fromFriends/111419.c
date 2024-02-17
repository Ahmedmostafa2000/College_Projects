#include <stdio.h>
void main(){
int i;
int arr[]={1,2,3,4,5,6,7,8,9};
int arr2[10];
for(i=0;i<10;i++){
	arr2[i]=arr[9-i];
}	
for(i=0;i<10;i++){
	printf("%d\n",arr2[i] );
}
}