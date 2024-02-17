#include<stdio.h>
int main(){
    int x;
    int y = 0;
    scanf("%d", &x);
    int z[100][100];
    for (int i = 0; i<x; i++){
        for (int j = 0; j<x; j++){
            scanf("%d", &z[i][j]);
        }
    }
    for (int i = 0; i<x; i++){
        for (int j = 0; j<x; j++){
            if (x % 2 != 0){

                if ((x + j == x - 1)&&i!=x/2){
                    y += z[i][j];
                }
                if (i == j&&i != x / 2){
                    y -= z[i][j];
                }
            }
            else{

                if (i + j == x - 1){
                    y += z[i][j];
                }
                if (i == j){
                    y -= z[i][j];
                }
            }
        }
    }
    printf("%d", y);
    return 0;
}