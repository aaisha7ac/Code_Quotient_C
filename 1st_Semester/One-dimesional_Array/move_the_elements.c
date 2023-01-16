#include <stdio.h>
void moveElements(int arr[], int n) {
  // Write your code here
  int temp[n];
  int j = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i]>=0) {
      temp[j] = arr[i];
      j++;
    }
  }
  for(int i = 0; i < n; i++) {
    if(arr[i]<0) {
      temp[j] = arr[i];
      j++;
    }
  }
  for(int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    moveElements(arr, size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}

/*
Sample Input
10
-6 7 13 10 -8 15 5 -9 2 -1

Sample Output
7
13
10
15
5
2
-6
-8
-9
-1
*/