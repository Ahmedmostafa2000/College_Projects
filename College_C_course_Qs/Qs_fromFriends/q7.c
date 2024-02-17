#include "stdio.h"
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    long long arr[100][100];
    int counter=0;
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            arr[i][j] = rand()%1001;

    for(long long i=0;i<100;i++)
        for (long long j = 0; j <100 ; j++){
            if(arr[i][j]>arr[i-1][j])
                if(arr[i][j]>arr[i+1][j])
                    if(arr[i][j]>arr[i][j-1])
                        if(arr[i][j]>arr[i][j+1])
                            if(arr[i][j]>arr[i-1][j-1])
                                if(arr[i][j]>arr[i+1][j-1])
                                    if(arr[i][j]>arr[i-1][j+1])
                                        if(arr[i][j]>arr[i+1][j+1])
                                            counter++;}

        printf("\n%d",counter);
        int pause;
        scanf("%d",&pause);
        return 0;
}
