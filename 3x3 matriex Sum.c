#include<stdio.h>
int main(){
 int a[3][3], i, j, Avg = 0;
 printf("Enter your array valurs:");
 for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        scanf("%d", &a[i][j]);
    }
 }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
     printf("%d ", a[i][j]);
     Avg = Avg + a[i][j];
    }
    printf("\n");
 }
 printf("Average value of 2d array: %d", Avg);
 return 0;
}
