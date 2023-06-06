#include <stdio.h>

int tseq(int n, int k) {
    int odd = (n+1)/2;
    int even = n/2;

    if(k<=odd){
        return (2*k)-1;
    }else{
        k -= odd;
        return 2*k;
    }
}
int main() {
    int n, k;
    printf("Enter the range (n): ");
    scanf("%d",&n);
    printf("Enter the k-th position: ");
    scanf("%d",&k);

    int result=tseq(n,k);
    printf("The k-th value in Teddy's sequence is: %d\n",result);

    return 0;
}
