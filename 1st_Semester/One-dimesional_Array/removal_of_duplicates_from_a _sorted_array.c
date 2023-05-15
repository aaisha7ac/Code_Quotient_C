#include <stdio.h>
void removeDuplicates(int arr[], int *size) {
  // Write your code here
  int temp[*size];
  int j = 0;
  for(int i = 0; i < *size-1; i++) {
    if(arr[i]!= arr[i+1]) {
      temp[j] = arr[i];
      j++;
    }
  }
  temp[j] = arr[*size-1];
  j++;
  for(int i = 0; i < j; i++) {
    arr[i] = temp[i];
  }
  *size = j;
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}

/*
Sample Input
5  // No. of elements
1
1
2
3
3

Sample Output
1
2
3
*/