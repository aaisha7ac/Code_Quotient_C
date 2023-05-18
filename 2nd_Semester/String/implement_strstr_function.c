/*Implement the strstr() function from string library as your own function. 
The function will take two strings as arguments and return the first occurrence
of second string in first string if found and -1 otherwise.*/


//TC : O(|str1| * |sub|) 
//|str1| = length of str1, |sub| = length of sub
//SC : O(1)

#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_LEN 100000

int strstrCode(char *str1, char *sub) {
  
  // Write your code here

     for(int i = 0; i < strlen(str1); i++) {
        int index = i;
        int count = 0;

        for(int j = 0; j < strlen(sub); j++) {
            if(str1[index] == sub[j]) {
                index++;
                count++;
            }
        }

        if(count == strlen(sub)) {
            return i;
        }

     }
    return -1;

}

int main()
{
  int t;
  char a[MAX_LEN + 1];
  char b[MAX_LEN + 1];
  scanf("%d", &t);

  while(t--)
  {
    scanf("%s %s", a, b);
    printf("%d\n", strstrCode(a, b));
  }

  return 0;

}

// Sample Input
// 2
// CodeQuotient CQ
// CodeQuotient Qu

// Sample Output
// -1
// 4