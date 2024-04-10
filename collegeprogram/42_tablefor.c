// wap to generate the table using for statement

#include<stdio.h>
int main(){
    int num;
    printf("kiska table chaiye = ");
    scanf("%d", &num);

    for(int i = 1; i<=10; i++){
        printf("%d\n", num*i);
    
    }

    return 0;
}