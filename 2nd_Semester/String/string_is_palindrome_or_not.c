// Given a string, you need to test if it is palindrome or not. 
//If the string is palindrome print “YES”, otherwise print “NO”.

//TC : O(len) len = length of string
//SC : O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Return 1 if the string is palindrome, else return 0
int isPalindrome(char *str) {
  // Write your code here
  int len = strlen(str) - 1;
  int i = 0;
  while(i <= len) {
    if(str[i] != str[len]) {
      return 0;
    }
    i++;
    len--;
  }
  return 1;
}

int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s", a);
    if(isPalindrome(a)){
      printf("YES");
    }else{
      printf("NO");
    }
    printf("\n");
  }
}

// Sample Input

// 2
// Coding
// cooc

// Sample Output

// NO
// YES