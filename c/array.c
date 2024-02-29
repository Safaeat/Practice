#include<stdio.h>
int main(){
  int arr[10];
  int n ,i;
  scanf("%d",&i);
  for(n = 0; n < i; n++){
    scanf("%d",&arr[n]);
  }
  for(n = 0; n < i; n++){
    printf("%d\n",arr[n]);
  }
return 0;
}
