#include "superc.h"
int factorial(int x){
    if(x)
        return x*factorial(x-1);
    return 1;
}
int main(){
    intPrint(factorial(5));
}