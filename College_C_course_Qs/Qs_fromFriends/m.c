#include <stdio.h>
int main()
{	char f1[100],l1[100],f2[100],l2[100];
	bool x;
	scanf("%s %s \n%s %s",&f1,&l1,&f2,&l2);
	for(int i;i<_strlen(f2))
	if(stricmp(f2,l2)==0)
		printf("ARE Brothers");
	else
		printf("NOT");
	return 0;
}