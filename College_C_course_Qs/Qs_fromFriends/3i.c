//
// Created by Mm on 1/4/2020.
//
#include <stdio.h>

void swap(long long* x,long long* y){
    long long temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(){
    long long n;
    scanf("%lli\n",&n);
    long long arr[n];
    long long count = 0;

    for(int i=0;i<n;i++)
        scanf("%lli",&arr[i]);



    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
                swap(&arr[i],&arr[j]);
        }
        for(int i=0;i<n;i++)
        {
            if (arr[i]==arr[0])
                count++;
            else
                break;
        }

        if(count%2==1)
            printf("Lucky");
        else
            printf("Unlucky");


    return 0;
}