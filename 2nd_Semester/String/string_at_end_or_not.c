/*Given two strings, check weather second string occurs at end of first string or not.
Complete the function strAtEnd(str,suffix) which accepts two strings as parameter and 
return 1 if str2 occurs at end of str1 and 0 otherwise.*/

//TC : O(|suffix|), |suffix| = length of suffix
//SC : O(1)

#include <stdio.h>
#include <string.h>

int strAtEnd(char *str, char* suffix) {
  // Write your code here
  
  	int count = 0;
  	int i = strlen(str) - 1;
  
    for(int j = strlen(suffix) - 1; j >= 0; j--) {
      	if(str[i] == suffix[j]) {
        	count++;
      	}
      	i--;
     	}
  
  		if(count == strlen(suffix)) {
      		return 1;
    	}
  
  		else {
        return 0;
    	}
  
}

int main() 
{

  int t,i,j=0;
  char a[50], b[50];
  scanf("%d", &t);

  while(t--)
  {
    scanf("%s %s", a, b);
    i = strAtEnd(a, b);
    printf("%d\n", i);
  }

}

// Sample Input
// 2
// CodeQuotient ent
// Coding Code

// Sample Output
// 1
// 0