#include <stdio.h>
#include "willuse.h"
int main(){
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        int arr[N];
        for(int j=0;j<N;j++){
            scanf("%d",arr[j]);
        }
        arrPrint(arr,N);
        for(int j=0;j<N;j++){
            for(int k=j;k<N;k++){
                printf("%d ",arr[j]);
            }
        }
    }
}