#include <stdio.h>
void main(){
	int x=2016;
	int flag=0;
	if (x%4 == 0)
	{
		flag = 1;
		if(x%100 == 0){
			flag=0;
		if(x%400 == 0){
				flag = 1;
			}
		}
	}
	printf("%d",flag);
}