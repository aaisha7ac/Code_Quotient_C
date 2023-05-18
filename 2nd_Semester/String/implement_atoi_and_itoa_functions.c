/*Implement the below functions with recursion from string library as your own functions.

1. itoa() function converts int data type to string data type.
2. atoi() function converts string data type to int data type.*/

#include <stdio.h>

void itoa(int num, char* result) {
  //calculate the length of num
  int n = num;
  int length = 0;
  if(num == 0) {
    length = 1;
  }

  else {
  	while(num != 0) {
    	length++;
    	num = num / 10;
  	}
  }

  for(int i = 0; i < length; i++) {
    int rem = n % 10;
    n = n / 10;
    result[length - (i + 1)] = rem + '0';
  }

  result[length] = '\0';
}


int atoi(char *str) {
  // Write your code here
  int i = 0;
  int sum = 0;

  while(str[i] != '\0') {
    sum = sum * 10 + (str[i] - 48); // 48 is the ASCII value of zero
    i++;
  }

  return sum;

}

int main() 
{
    
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);

  while(t--)
  {
    scanf("%s %d", a, &i);
    itoa(i, b);
    j =atoi(a);
    printf("%d %s\n", j, b);
  }

}

// Sample Input
// 1
// "100" 135

// Sample Output
// 100 "135"