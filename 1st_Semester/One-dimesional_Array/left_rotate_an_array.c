#include <stdio.h>

void rotateArray(int arr[], int N, int R) {
  // Write your code here
  int temp[N];
  int k = 0;
  for(int i = R; i < N; i++) {
    temp[k] = arr[i];
    k++;
  }
  for(int i = 0; i < R; i++) {
    temp[k] = arr[i];
    k++;
  }
 for(int i = 0; i < N; i++) {
   arr[i] = temp[i];
 }
}

int main()
{
    int i, R,SIZE;
    scanf("%d",&SIZE); //size of an array 
    int arr[SIZE];
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &R); //number of rotations
   
    rotateArray(arr,SIZE,R);
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Sample Input
10  // N
1 2 3 4 5 6 7 8 9 0 // arr[]
2  // R

Sample Output
3 4 5 6 7 8 9 0 1 2 

Explanation:
Initially arr[] = {1,2,3,4,5,6,7,8,9,0}
After 1 rotation arr[] = {2,3,4,5,6,7,8,9,0,1}
After 2 rotations arr[] = {3,4,5,6,7,8,9,0,1,2}
*/
