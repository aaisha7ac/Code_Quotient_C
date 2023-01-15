#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a = n;
  int b = n;
  int count = 0;
  while(n!=0) {
    n = n/10;
    count++;
  }
  int sum = 0;
  while(a!=0) {
    int rem = a % 10;
    sum = sum + pow(rem,count);
    a = a/10;
  }
  if(sum == b) {
    printf("yes");
  }
  else{
    printf("no");
  }
    return 0;
}

/*
Sample Input
371

Sample Output
yes
*/