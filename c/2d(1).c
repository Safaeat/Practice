#include<stdio.h>
int main(){
  int arr[2][3] = {1, 3, 2, 4, 5, 7};
  int i, j;

  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        printf("%d\n", arr[i][j]);
    }
  }

return 0;
}
