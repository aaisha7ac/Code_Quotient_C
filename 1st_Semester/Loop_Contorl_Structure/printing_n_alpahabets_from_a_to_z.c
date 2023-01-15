#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i = 97; i <= 97 + (n-1); i++){
    printf("%c ",i);
  }
    return 0;
}

/*
Sample Input:
7

Sample Output:
a b c d e f g
*/