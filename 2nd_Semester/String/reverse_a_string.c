// Given a string, the task is to reverse it.
// For example, if the string is "Hello" , reversed string is "olleH".

//TC : O(len) len = length of string
//SC : O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Do not print anything, just reverse the given string
void reverseString (char str[]) {
  // Write your code here
  int len = strlen(str);
  if(len % 2 == 0) {
    int j = len /2;
    while(j <= len -1) {
      char temp;
      temp = str[len - j -1];
      str[len - j - 1] = str[j];
      str[j] = temp;
      j++;
    }
  }
  else{
    int j = (len /2) + 1;
    while(j <= len -1) {
      char temp;
      temp = str[len - j -1];
      str[len - j - 1] = str[j];
      str[j] = temp;
      j++;
    }
  }
  return str;
}

int main()
{
   char str[50];
   int test, num;
  
   scanf("%d",&test);
   while(test!=0)
   {
     scanf("%s", str);
     reverseString(str);
     puts(str);
     test--;
   }
    return 0;
}

// Sample Input 1
// 1
// codequotient

// Sample Output 1
// tneitouqedoc

// Sample Input 2
// 1
// programming

// Sample Output 2
// gnimmargorp