#include <stdio.h>
#include<stdbool.h>
int check_binary(long long int n) {
  while(n!=0) {
    int rem = n % 10;
    if(rem >= 2) {
      return false;
    }
    n = n/10;
  }
  return true;
}
int main()
{
  long long int n;
  scanf("%lld",&n);
  bool ans = check_binary(n);
  int sum = 0;
  int i = 0;
  if(ans == true) {
    while ( n != 0) {
      int rem = n % 10;
      sum = sum + rem *pow(2,i);
      n = n /10;
      i++;
    }
    printf("%o",sum);
  }
  else{
    printf("-1");
  }
    return 0;
}

/*
Print -1, if input is not a binary number.

Sample Input
001001

Sample Output
11
*/