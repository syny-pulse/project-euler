#include <stdio.h>
int main(void) {
    int n, sum = 0;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        if(i%5==0||i%3==0) {
            sum = sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}