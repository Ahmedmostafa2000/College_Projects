#include <stdio.h>
#include <math.h>
void main()
{	float x , y , z ,c;
	int a = 97;
	//ceil 1.7 >> 2.000
	//floor 1.7>> 1.000
	x = ceil(1.3);
	y = ceil(1.6);
	z = floor(1.3);
	c = floor(1.6);

	printf("%f %f %f %f \n",x,y,z,c);
	printf("%c\r",a);
}