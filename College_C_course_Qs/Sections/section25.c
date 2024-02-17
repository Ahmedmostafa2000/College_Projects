#include <stdio.h>
#include <math.h>
#include <complex.h>
void main(){
	float a , b , c , solution1,solution2;
	scanf("%fx^2+%fx+%f",&a,&b,&c);
	//x = (-b+-(b^2-4ac)^.5)/2a
	solution1 = (-1*b + sqrt((b*b)-(4*a*c)))/(2*a);
	solution2 = (-1*b - sqrt((b*b)-(4*a*c)))/(2*a);
	if(sizeof(solution1)==sizeof(1) || sizeof(solution1)==sizeof(1.1)){
		
		printf("%d %d",solution1,solution2 );
	}
	else{
		printf("No Solution");
	}
}