#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  for(int row = 1; row <= n; row++) {
    for(int col = 1; col <= row; col++) {
      printf("%d",col);
    }
    printf("\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
n = 5;
1
12
123
1234
12345
*/

