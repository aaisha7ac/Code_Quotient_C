#include <stdio.h>
#include<limits.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d",&arr[i]);
  }
  int max = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i]>max) {
      max = arr[i];
    }
  }
  int second_max = INT_MIN;
  for(int i = 0; i < n; i++) {
    if(second_max < arr[i] && arr[i] < max){
      second_max = arr[i];
    }
  }
  if(second_max == INT_MIN) {
    printf("%d",0);
  }
  else{
    printf("%d",second_max);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


/*
Sample Input 1
5
30 210 100 40 70

Sample Output 1
100

Sample Input 2
5
40 -20 50 40 10

Sample Output 2
40

*/