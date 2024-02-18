#include<stdio.h>
int main(){
 int arr[7]={-99,45,100,37,89,-327,245};
 int big = arr[0];
  for(int i = 1 ; i < 7; i++){
   if(big < arr[i]){
    big = arr[i];
   }
 }
 printf("The max numbers is : %d", big);
return 0;
}
