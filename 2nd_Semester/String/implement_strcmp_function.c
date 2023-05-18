/*Write your own implementation of strcmp function in C. 
The function will take two strings as arguments and compare
 them character by character and return an integer value as under: -

0        : if both strings are identical (equal)
Negative : if the ASCII value of first unmatched character in first string is less than second string.
Positive : if the ASCII value of first unmatched character in first string is greater than second string.

Complete the function int strcmp(str1,str2) that will take two strings as parameters and compare them. 
The function must return 0 if the strings are equal. Else function must return the difference between
the ASCII value of unmatched character.*/

//TC : O(|str1|), |str1| = length of string str1
//SC : O(1)

#include <stdio.h>

int strcmp(const char* str1, const char* str2) {
  // Write your code here
  	int size_str1 = strlen(str1);
  	int size_str2 = strlen(str2);
  
    for(int i = 0; i < size_str1; i++) {
     if(str1[i] < str2[i]) {
        return -(str2[i] - str1[i]);
      }
      if(str1[i] > str2[i]) {
        return (str1[i] - str2[i]);
      }
    }
 
  return 0;
}

int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    j=strcmp(a,b);
    printf("%d\n",j);
  }
}


// Sample Input
// 2
// Coding Coding
// programming Programming

// Sample Output
// 0
// 32