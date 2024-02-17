#include "stdio.h"
#include <string.h>
void main(){
	char text[]="     Hello World";
	int flag=0;
	int counter=0;
	for(int i=0;i<strlen(text);i++){
		if(text[i]==' '){
			flag=1;
		}
		else{
			flag=0;
			counter = 0;
		}
		if(!flag){
			printf("%c",text[i]);
		}
		else if(flag && counter<1){
			printf("\n");
			counter++;
		}
		}
		

	
}