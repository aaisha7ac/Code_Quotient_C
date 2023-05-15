#include <stdio.h>
void frequency(int a[], int T)
{
  int freq[T];
  int visited = -1;
  for(int i = 0; i < T; i++) {
    int count = 1;
    for(int j = i+1; j < T; j++) {
      if(a[i]==a[j]) {
        count++;
        freq[j] = visited;
      }
    }
    if(freq[i]!=visited) {
      freq[i] = count;
    }
  }
  for(int i = 0; i < T; i++) {
    if(freq[i]!=visited) {
      printf("%d-%d\n",a[i],freq[i]);
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
  frequency(arr,t);
  return 0;
}

/*
Sample Input
7
1 3 3 8 1 8 6

Sample Output
1-2
3-2
8-2
6-1


*/