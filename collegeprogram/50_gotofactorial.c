#include<stdio.h>
int main(){
    int n, fac = 1, i = 1;
    printf("kiska factorial chaiye : - ");
    scanf("%d", &n);

    l1:
    fac = fac * i;
    i++;
    if(i<=n) goto l1;

    printf("%d", fac);
    return 0;

}