// wap to find the factorial of given number for statement

#include<stdio.h>
int main(){
    int num, fac = 1;
    printf("kiska factorial chaiye = ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++){
        fac *= i;
    }
    printf("%d", fac);

    return 0;
}