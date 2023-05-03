#include<stdio.h>
int main(){
 float a,b,c,d,tax;
 long int s;

 printf("Enter your salary: \n");
 scanf("%ld",&s);
 if(s<=1000){
    tax = s *(0.5/100);
 }else if(s<=2000){
    a = 1000 *(0.5/100);
    b = (s - 1000) * (1.5/100);
    tax = a + b;
 }else if(s>2000 && s<=4000){
    a = 1000 * (0.5/100);
    b = 1000 * (1.5/100);
    c = (s - 2000) * (2.5/100);
    tax = a + b + c;
 }else{
    a = 1000 * (0.5/100);
    b = 1000 * (1.5/100);
    c = 2000 * (2.5/100);
    d = (s  - 4000) * (3.5/100);
    tax = a + b + c + d;
 }





 printf("Your salary: %ld \n", s);
 printf("Your Tax Amount: %.2f ", tax);

return 0;
}

/*

Input:
Enter your salary:
1000

Output:
Your salary: 1000
Your Tax Amount: 5.00

Input:
Enter your salary:
2500
Output:
Your salary: 2500
Your Tax Amount: 32.50

Input:
Enter your salary:
5000
Output:
Your salary: 5000
Your Tax Amount: 105.00

*/
