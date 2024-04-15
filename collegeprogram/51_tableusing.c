#include<stdio.h>
int main(){
    int i = 1, table;
    printf("enter the number = ");
    scanf("%d", &table);

    l1:
    printf("%d\n", table*i);
    i++;
    if(i<=10) goto l1;

    return 0;
}