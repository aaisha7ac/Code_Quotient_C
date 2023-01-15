#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int i = 1;
  for(int row = 1; row <= n; row++) {
    for(int col = 1; col <= row; col++) {
      if(row==col) {
         printf("%d",i);
      		i++;
      }
   else{
     printf("%d ",i);
     i++;
   }
    }   
    printf("\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
n = 3;
1
2 3
4 5 6
*/