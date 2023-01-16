#include <stdio.h>
int delete(int arr[], int T, int n)
{
  int a;
  for(int i = 0; i < T; i++) {
    if(arr[i]==n) {
      a = i;
    }
  }
  for(int i = a; i < T; i++) {
    arr[i] = arr[i+1];
  }
}

int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&n);
  delete(arr,t,n);
  for(i=0;i<t-1;i++)
    printf("%d ",arr[i]);
  return 0;
}

/*
Sample Input
4
1 2 3 5
3

Sample Output
1 2 5

*/