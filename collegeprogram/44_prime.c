// wap to find number is prime or not using for statement

#include<stdio.h>
int main(){
    int div = 0, num;
    printf("enter the number = ");
    scanf("%d", &num);

    for(int i = 1; i<=num/2; i++){
        if(num % i == 0){
            div+=1;
        }
    }
    if(div == 1){
        printf("enter number is prime");
    }
    else{
        printf("not prime number");
    }

    return 0;
}