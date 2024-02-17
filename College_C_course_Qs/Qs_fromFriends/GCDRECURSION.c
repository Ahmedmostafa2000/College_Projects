#include "superc.h"
int gcd(int x,int y) {
    if(y%x==0){
        return x;
    }
    else{
        gcd(y%x,x);
    }
}
int lcm(int x, int y){
    //intPrint(y);Tprint();
    static int num=0;
    num+=y;
    if(num%x==0 && num%y==0){
        Sprint();
        return num;
    }
    else{
        lcm(x,y);
    }
}
int lcm2(int x,int y){
    return (x*y)/gcd(x,y);
}
int main(void){

    intPrint(gcd(5,14));
}