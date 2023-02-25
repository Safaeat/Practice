#include<stdio.h>
float add(float a ,float b){
    return a+b;
}
float sub(float a ,float b){
    return a-b;
}
float mul(float a ,float b){
    return a*b;
}
float div(float a ,float b){
    return a/b;
}
int main(){
  float a, b;
  printf("Enter the 2 floating numbers: \n");
    scanf("%f%f",&a ,&b);
 float addr = add(a, b);
 float subr = sub(a, b);
 float mulr = mul(a, b);
 float divr = div(a, b);
 printf("Addition = %f\n",addr);
 printf("Subtraction = %f\n",subr);
 printf("Multiplecation = %f\n",mulr);
 printf("Division = %f\n",divr);
return 0;
}
