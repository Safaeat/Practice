#include<stdio.h>
int sum(int x, int y){
 int total = x + y;
 return total;
}
int mul(int p, int q){
int total = p - q;
return total;
}

int main(){
 printf("start\n");
 int sum_r = sum(5, 10);
 printf("The Adiction: %d\n",sum_r);
 int p =  30 ,q = 20;
 int mul_r = mul(p, q);
 printf("The Subtraction: %d\n",mul_r);
return 0;
}
