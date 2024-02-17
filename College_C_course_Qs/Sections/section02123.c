#include <stdio.h>
#include <string.h>
void main(){
	char end[100];
	int x = 1;
	scanf("%s",&end);
	while (x){
    if(strlen(end)!=1){
    if (getche()==end[0]){
	for(int i = 1;i<strlen(end);i++)
	{
		if(getche()==end[i]){
			x=0;
		}
		else
			x=1;
			break;
	}
	}}
	else{
	    if(getche()==end[0]){
            x=0;}
    }



}
}

