// Implement the strcat() function from string library as your own function(user-defined).
// The function will take two strings as arguments and concatenate the second
// string at the end of first string.

#include <stdio.h>

void strcatCode(char* str1, char* str2) {
  // Write your code here
  while(*str1 != '\0') {
    str1++;
  }
  while(*str2 != '\0') {
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1 = '\0';
}

int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    strcatCode(a,b);
    printf("%s\n", a);
  }
}

// Sample Input
// 1
// Code Quotient

// Sample Output
// CodeQuotient