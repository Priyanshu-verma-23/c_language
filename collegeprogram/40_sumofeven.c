// wap to find the sum of even number using for statement

#include<stdio.h>
int main(){
    int sum = 0, num;
    printf("kaha tak ka chaiye sum = ");
    scanf("%d", &num);

    for(int i = 0; i<=num; i+=2){
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}