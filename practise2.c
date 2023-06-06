#include <stdio.h>
int main() {
    int x,y,i;
    printf("Enter Teddy's weight (x): ");
    scanf("%d",&x);
    printf("Enter Eddy's weight (b): ");
    scanf("%d",&y);

    int years = 0;
    for(i=x; x<=y; i++){
        x *= 3;
        y *= 2;
        years++;
    }
    printf("After %d years, Teddy will become heavier than Eddy.\n",years);
  return 0;
}
