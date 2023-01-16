#include <stdio.h>
int main(){
  int n,j;
  scanf("%d",&n);
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    scanf("%d",&j);
    sum = sum * 10 + j;
  }
  printf("%d",sum);
  return 0;
}

/*
Sample Input 1
5
2
7
5
9
3

Sample Output 1
27593

Sample Input 2
3
1
2
0

Sample Output 2
120
*/