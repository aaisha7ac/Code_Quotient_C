// Online C compiler to run C program online
#include<stdio.h>
int check(int arr[]) {
    int i = 9;
    int j = 0;
    while(i>j) {
      if(arr[i] != arr[j]) {
        return 0;
      }
      i--;
      j++;
    }
  return 1;
}
int main()
{
  int arr[10];
  for(int i = 0; i < 10; i++) {
    scanf("%d",&arr[i]);
  }
  int ans = check(arr);
  if(ans == 1){
    printf("Equal");
  }
  else{
    printf("Not Equal");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
Sample Input
1
0
0
0
0
0
0
0
0
1

Sample Output
Equal
*/