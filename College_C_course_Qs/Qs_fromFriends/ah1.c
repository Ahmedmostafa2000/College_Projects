#include <stdio.h>
#define num 15
void main(){
	int counter = 0,x = 0;
	int arr[]={1,3,3,4,4,3,6,6,7,7,8,8,8,8,7};
	int arr2[]={1,3,3,4,4,3,6,6,7,7,8,8,8,8,7};
	for(int i=1;i<num;i++){
		if (arr[i]>arr[i-1])
		{
			arr2[i-1]=arr[i];
		}

		}
	for (int i = 1; i < num; ++i)
	{
		if((arr2[i]==arr2[i+1])&&(arr2[i]==arr2[i-1])){
			counter++;
		}
	
	}
	printf("%d\n",counter/2+1 );
		}
