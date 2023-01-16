#include <stdio.h>

void isSquare(int n)
{
  for(int i = 1; i <= n; i++) {
    int rem = n % i;
    if(rem == 0) {
      int q = n/i;
      if(q==i) {
        printf("yes");
        break;
      }
      if(q==1){
        printf("no");
        break;
      }
    }
  }
}

int main()
{
    int num;
    scanf ("%d", &num);
    isSquare(num);
    return 0;
}

/*
Sample Input
4

Sample Output
yes
*/