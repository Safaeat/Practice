#include<stdio.h>
int main(){
 int arr[10];
 int sum;
 printf("Enter the 10 numbers \n");
  for(int i = 0 ; i < 10; i++){
 scanf("%d",&arr[i]);
 sum += arr[i];
 }
 printf("The sum of 10 numbers is : %d", sum);
return 0;
}
