#include<stdio.h>
int main(){
int i,j,k;

for(i=1;i<=7;i=i+2){
    for(j=1;j<i;j=j+2){
        printf(" ");
    }
    for(k=7;k>=i;k--){
        printf("*");
    }

    printf("\n");
}

return 0;
}
