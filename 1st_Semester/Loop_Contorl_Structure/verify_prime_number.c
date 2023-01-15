#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int verifyPrime(int n) {
  if( n == 0 || n == 1) {
    return 0;
  }
  // Write your code here
  for(int i = 2; i <= sqrt(n); i++) {
    if (n% i == 0) {
      return 0;
      break;
    }
  }
  return 1;
}

int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&no);
     
	if (verifyPrime(no))
	  printf("PRIME\n"); 
    else 
  		printf("NOT PRIME\n"); 
   }
}

/*
Sample Input
2 // No. of testcases
3
4

Sample Output
PRIME
NOT PRIME
*/