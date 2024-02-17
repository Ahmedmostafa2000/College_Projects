#include "stdio.h"
int main(){
  int n,search,held[n];
  scanf("%d",&n );
  for (int i = 0; i < n; i++) {
    scanf("%d",&held[i] );
  }
    scanf("%d",&search );
  for (int i = 0; i < n; i++) {
    if (held[i]==search) {
      printf("%d",i );
      return 0 ;
    }
  }

  printf("-1");
  return 0;
}
