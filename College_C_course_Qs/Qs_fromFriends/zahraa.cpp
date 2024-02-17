#include <stdio.h>
int main()
{
    long long i,x,n,p,mn,mx,j,temp;
    scanf("%lli\n",&n);
    long long a[n];
    for(i=0;i<n;i++){
        scanf("%lli",&a[i]);}
    mn=a[0];
    mx=a[0];
    for(i=0;i<n;i++)
    {
        if(mx<a[i]){
            mx=a[i];
            p=i;  }
        if(mn>a[i]){
            mn=a[i];
            x=i;}
    }
    temp=a[x];
    a[x]=a[p];
    a[p]=temp;
    for(i=0;i<n;i++){
        printf("%lli ",a[i]);

    }
    return 0;
}