// Write a function mergeArrays which should merge two 
// sorted arrays to create one single sorted array.
// Complete the function int* mergeArrays(int a[], int b[] , int asize, int bsize)
// below which takes pointers to the first element of the two sorted arrays & the 
// size of the arrays and return the base address of the final sorted array.

#include <stdio.h>
int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  int n = asize + bsize;
  int temp[n];
  int i = 0, j = 0, k = 0;
  while(i < asize && j < bsize) {
    if(a[i] < b[j]) {
      temp[k] = a[i];
      i++;
    }
    else{
      temp[k] = b[j];
      j++;
    }
    k++;
  }
  while(i < asize) {
    temp[k] = a[i];
    i++;
    k++;
  }
  while(j < bsize) {
    temp[k] = b[j];
    j++;
    k++;
  }
  for(int l = 0; l < n; l++) {
    a[l] = temp[l];
  }
  return a;
}

int main()
{
    int i, k, size = 0, size1 = 0, *final;
   
    scanf("%d", &size);
    int a[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &a[i]);

    scanf("%d", &size1);
    int b[size1];
    for( i = 0; i < size1; i++) 
        scanf("%d", &b[i]);
     
    final = mergeArrays(a, b, size, size1);
    
    for (i = 0; i < (size + size1); i++) 
        printf("%d\n", final[i]);

  return 0;
}


// Sample Input

// 4				// Size of 1st array
// 1 2 3 6		// Elements of 1st array
// 3				// Size of 2nd array
// 4 5 7			// Elements of 2nd array
// Sample Output

// 1
// 2
// 3
// 4
// 5
// 6
// 7

