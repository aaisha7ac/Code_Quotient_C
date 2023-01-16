#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,m,i,j;
  int counter = 1;
  scanf("%d %d",&n,&m);
  for(i = 2; i <= n; i++) {
    for(j = 2; j < i; j++) {
      if(i%j==0) {
        break;
      }
    }
    if(i == j) {
      if(counter<=m) {
        printf("%d\n",i);
        counter++;
      }
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


/*
Sample Input
10 2

Sample Output
2
3

Explanation:
With n = 10 and m = 2, the first 2 prime numbers within the range 1-10 are 2 and 3

*/