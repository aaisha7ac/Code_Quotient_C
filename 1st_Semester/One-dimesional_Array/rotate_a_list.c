#include <stdio.h>
/* Include other headers as needed */
void rotate_a_list(int arr[],int n,int d) {
  int j;
  for(int i = d; i > 0; i--) {
    int temp = arr[0];
    for(j = 0; j <n-1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[j] = temp;
  }
  for(int i = 0; i < n; i++) {
    if(i+1==n) {
      printf("%d",arr[i]);
    }
  else{
    printf("%d ",arr[i]);
  }
  }
  printf("\n");
}
int main()
{
  int N;
  scanf("%d",&N);
  for(int i = 0; i < N; i++) {
    int n;
  	scanf("%d",&n);
    int arr[n];
    for(int j = 0; j < n; j++) {
      scanf("%d",&arr[j]);
    }
    int rotation;
    scanf("%d",&rotation);
    rotate_a_list(arr,n,rotation);
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
/*
Sample Input:
3 //no of test cases

7
1 2 3 4 5 6 7
3

9
3 5 2 1 7 5 9 15 11
10

1
5
13

Sample Output
4 5 6 7 1 2 3
5 2 1 7 5 9 15 11 3
5

*/