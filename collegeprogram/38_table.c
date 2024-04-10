// wap to generate the table using while statement

#include<stdio.h>
int main(){
    int table, i = 1;
    printf("kiski table chaiye = ");
    scanf("%d", &table);
    while(i<=10){
        printf("%d\n", table*i);
        i++;
    }

    return 0;
}