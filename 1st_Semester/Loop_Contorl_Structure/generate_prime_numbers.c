#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i = 2; i <= n; i++) {
    for(j = 2; j < i; j++) {
      if(i%j == 0){
        break;
      }
    }
    if(i ==j) {
    	printf("%d\n",i);
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
Sample Input
10

Sample Output
2
3
5
7

*/