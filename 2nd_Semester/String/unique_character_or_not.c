/*Given a string, you need to test the characters for their uniqueness. 
If all the characters occur at most 1 time in the string, then print “YES”, 
otherwise if some character occurs at least twice in the string print “NO”.*/

//TC : O(|str|), |str| = length of the string
//SC : O(1)

#include <stdio.h>

// Return 1 if string contains all unique characters, else return 0

int isUniqueChars(char *str){
  // Write your code here

  int n = strlen(str);

  //mapping all the alphabets with their ASCII value
  int hash[256] = {0};
  for(int i = 0; i < n; i++) {
    hash[str[i]]++;
  }

  for(int i = 0; i < n; i++) {
    if(hash[str[i]] > 1) {
      return 0;
    }
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
    if(isUniqueChars(a)){
      printf("YES");
    }else{
      printf("NO");
    }
    printf("\n");
  }

}

// Sample Input
// 2
// CodeQuotient
// Coding

// Sample Output
// NO
// YES