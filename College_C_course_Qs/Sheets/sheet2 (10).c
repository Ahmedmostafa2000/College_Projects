#include "stdio.h"
#include "string.h"
int main(){
	char pass[]="1999";
	char upass[100];
	while (1){
		scanf("%s",&upass);
	if (strcmp(upass,pass)==0)
	{
		printf("Correct" );
		return 0;
	}
	else{
		printf("Wrong\n" );
	}}
	return 0;
}