#include <stdio.h>
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  int max = x > y? x : y;
  while(1) {
    if(max%x==0 && max%y==0) {
      break;
    }
    max++;
  }
  printf("%d",max);
    return 0;
}

/*
Sample Input
12 30

Sample Output
60
*/