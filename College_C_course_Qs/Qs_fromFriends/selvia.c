#include "superc.h"
//factorial function
int factorial(int x){
    int fact=1;
    for(int i = 1; i<=x;i++){
        fact *= i;
    }
    return fact;
}
//product p(p-1)...(p-m)
int prod(int n,int p){
    int x = 1;
    for (int i = 0; i < n; ++i) {
        x *= (p-i);
    }
    return x;
}
//one term of the function
float term(int p,int x,int n){
    n-=1;
    return (pow(x,n)*prod(n,p))/factorial(n);
}
int main(void) {
    int arr[3];
    puts("P value, X value");
    arrInput(arr,2);
    Sprint();
    int p = arr[0];
    int x = arr[1];
    int sum=0;
    int oneTerm;
    int countZeroes=0;
    int i=1;
    //summing terms
    while (1) {
        oneTerm = term(p,x,i) ;
        //stopping algorithm
        if(oneTerm==0)
            countZeroes++;
        if(countZeroes==2)
            break;
        sum += oneTerm ;
        i++;
    }
    //printing function
    floatPrint(sum);

}