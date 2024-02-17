#include "stdio.h"
int main(){
	int n;
	int first,seconed;
	scanf("%d\n%d",&n,&first);
	for(int i=1;i<n;i++){
		scanf("%d",&seconed);
		if(first<seconed){
			first=seconed;
		}
	}
	printf("%d",first );
	return 0;
}