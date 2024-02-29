#include<stdio.h>
int scan(){
 int n;
 printf("Enter the number: \n");
 scanf("%d",&n);
 return n;
}
void function(int num){
 if(num%2==0){
    printf("This is Even number.");
 }else{
    printf("This is Odd number.");
 }
 return 0;
}

int main(){
 int num = scan();
 function(num);
return 0;
}
