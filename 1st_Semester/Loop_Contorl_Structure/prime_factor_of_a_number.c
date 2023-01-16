#include <stdio.h>

void primeFactors(int n){
  // Write your code here
  int i = 2;
  while(n!=1) {
    while(n%i == 0) {
      printf("%d\n",i);
      n = n /i;
    }
    i++;
  }
}

int main(){
	int no;
    scanf("%d",&no);
    primeFactors(no);   
   return 0;   
 }

 /*
Sample Input
24

Sample Output
2
2
2
3
 */