#include <stdio.h>
void separate(int a[], int T)
{
  int even[T];
  int odd[T];
  int j = 0;
  int k = 0;
  for(int i = 0; i < T; i++) {
    if(a[i]%2==0) {
      even[j] = a[i];
      j++;
    }
   else {
      odd[k] = a[i];
      k++;
    }
  }
  printf("Even:");
  for(int i = 0; i < j; i++) {
    if(i+1 == j) {
      printf("%d",even[i]);
    }
    else{
       printf("%d ",even[i]);
    }
  }
  printf("\n");
  printf("Odd:");
  for(int i = 0; i < k; i++) {
    if(i+1 == k) {
       printf("%d",odd[i]);
    }
    else{
    printf("%d ",odd[i]);
    }
  }
}

int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  separate(arr,t);
  return 0;
}

/*
Sample Input
4
1 3 5 8

Sample Output
Even:8
Odd:1 3 5
*/

