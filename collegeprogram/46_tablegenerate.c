// wap to generate table using do while statement

#include<stdio.h>
int main(){
    int i = 1, table, num;
    printf("kiska table chaiye = ");
    scanf("%d", &num);
    do{
        table = num * i;
        printf("%d\n", table);
        i++;
    }
    while(i<=10);

    return 0;
}