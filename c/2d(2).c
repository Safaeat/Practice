#include<stdio.h>
int main(){
  int arr[3][3];
  int i, j, count = 0;
  printf("Enter the 3*3 matrix:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  printf("The 3*3 matrix:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        count = count + arr[i][j];
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  int avg =  count/9;
  printf("The average value: %d", avg);

return 0;
}
