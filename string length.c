#include<stdio.h>
int main(){
  char name[50];
  printf("Enter your word:\n");
  gets(name);
  int i=0, length = 0;
  while(name[i] != '\0'){
      length++;
      i++;
     }
  printf("The word length : %d", length);
return 0;
}

