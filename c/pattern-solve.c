#include<stdio.h>
int main(){
  int i, j, k, l, m, n, temp = 1;
  for(i = 0; i <= 4; i++){
    for(j = 0; j < 1; j++){
      for(k = i; k < 4; k++){
        printf("#");
      }
      for(l = 0; l <= i; l++){
        printf("*");
      }
      for(m = 0; m < i; m++){
        printf("#");
      }
      for(n = i; n <=4 ; n++){
        printf("%d", temp);
      }
      printf("\n");
      temp += 2;
    }

  }


return 0;
}
