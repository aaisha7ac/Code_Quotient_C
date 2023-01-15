#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int row = 1; row <= n; row++) {
        for(int s = 1; s <= n - row; s++) {
            printf(" ");
        }
        
        for(int col = 1; col <= row; col++) {
            printf("* ");
        }
        
        printf("\n");
      }
      
      for(int row = n-1; row >= 1; row--) {
        
        for(int s = 1; s <= n - row; s++) {
            printf(" ");
        }
        for(int col = 1; col <= row; col++) {
            printf("* ");
        }
        
        printf("\n");
      }
      return 0;
}

/*
n = 4
   *
  * *
 * * *
* * * *
 * * *
  * *
   *

*/