#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    long long arr[n][n];
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        scanf("%lli",&arr[i][i]);
    }
    long long sum1=0;
    long long sum2=0;
    for(i=0;i<n;i++)
        sum1 += arr[i][i];
    for(i=0;i<n;i++)
        sum2 += arr[i][n-1-i];

long long a=abs(sum1-sum2);
printf("%lli",a);
}