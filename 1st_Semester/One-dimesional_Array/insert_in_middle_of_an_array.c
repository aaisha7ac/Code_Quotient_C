#include <stdio.h>
int insert(int arr[], int size, int n, int pos)
{
 int i ;
  for(i = size; i > pos; i--) {
    arr[i] = arr[i-1];
  }
  arr[pos] = n;
}

int main()
{
  int t,arr[100],n,pos;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  scanf("%d%d",&n,&pos);
  insert(arr,t,n,pos);
  for(i=0;i<=t;i++)
    printf("%d ",arr[i]);
  return 0;
}

/*
Sample Input
4
1 2 3 5
4 3

Sample Output
1 2 3 4 5
*/