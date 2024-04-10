// wap to fing the sum of odd number from 1 to n using while statement

#include<stdio.h>
int main(){
    int i = 1, n, sum = 0;
    printf("enter the value of n = ");
    scanf("%d", &n);

    while(i<=n){
        sum += i;
        i += 2;
    }
    printf("%d", sum);
    return 0;
}