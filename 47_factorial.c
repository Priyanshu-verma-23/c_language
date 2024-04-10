// wap to find factorial using do while statement

#include<stdio.h>
int main(){
    int fac = 1, i = 1, num;
    printf("kiska factorial chaiye = ");
    scanf("%d", &num);

    do{
        fac *= i;
        i++;
    }
    while(i<=num);

    printf("%d", fac);

    return 0;
}