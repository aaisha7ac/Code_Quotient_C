#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void fib_sequence(int n) {
  // Write your code here
  long long int a = 0;
  long long int b=1;
  long long int c=0;
  int count = 1;
  while(count <= n) {
      printf("%lld\n",c);
    a = b;
    b = c;
    c = a + b;
    count++;
  }
}

int main()
{
   int n;
   scanf("%d",&n);
   fib_sequence(n);
   return 0;
}

/*
Sample Input
4  

Sample Output
0
1
1
2
*/