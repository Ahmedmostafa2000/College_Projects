#include <stdio.h>
void main(){
int i,j,x=5;
for(j=1;j<10;j+=2){
for(i=x;i!=0;i--)
{	
	printf(" ");

}sa
x--;
for(i=0;i<j;i++){
	printf("*");


}

printf("\n");
}
x=2;
int u=7;
for (int i = 0; i < 4; i++)
{
	for (int j = 0; j < x; ++j)	
	{
		printf(" ");
	}
	x++;


	for (int k = 0; k<u;k++)
	{
		printf("*");
		
	}
	u-=2;
	printf("\n");
}
}