#include<stdio.h>
int main(){
 int a[5],i;
 int odd=0,even=0;
 printf("Enter the 5 values of array:\n");
 for(i = 0; i < 5; i++){
   scanf("%d", &a[i]);
 }
 printf("Values of array:");
 for(i = 0; i < 5; i++){
    printf("%d", a[i]);
    if(a[i] % 2 == 0){
            even = even + a[i];
    }else{
            odd = odd + a[i];
    }
  }
  printf("\nSum of odd values: %d", odd);
  printf("\nSum of even values: %d", even);
 return 0;
}
