#include <stdio.h>
/* Include other headers as needed */
int main(){
  int arr[7];
  for(int i = 0; i < 7; i++) {
    scanf("%d",&arr[i]);
  }
  int key;
  scanf("%d",&key);
  int count = 0;
  for(int i = 0; i < 7; i++) {
    if(arr[i]==key){
     count ++;
    }
}
  if(count == 0) {
    printf("Not Present");
  }
  if(count != 0) {
    printf("%d",count);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

/*
Sample Input 1
3 10 20 4 7 4 5
5
Sample Output 1
1

Sample Input 2
31 1 0 14 5 21 9
4
Sample Output 2
Not Present
*/