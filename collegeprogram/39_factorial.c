// wap to find the factorial of given number using while statement

#include<stdio.h>
int main(){
    int i = 1, num, fac = 1;
    printf("kiska factorial chaiye = ");
    scanf("%d", &num);

    while(i<=num){
        fac *= i;
        i++;
    }
    printf("%d", fac);

    return 0;
}