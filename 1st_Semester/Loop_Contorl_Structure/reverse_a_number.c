#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int reverse = 0;
  while(n!=0) {
    reverse = reverse * 10 + n % 10;
    n = n/10;
  }
  printf("%d",reverse);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
Sample Input
1234

Sample Output
4321
*/