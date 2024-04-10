// wap to find prime number from 1 to n

#include<stdio.h>

int main(){
    int result, num, n;
    printf("enter the value of n = ");
    scanf("%d", &n);
    for(int num = 1; num<=n; num++){
        if(num == 1){
            printf("%d is not a prime number", num);
        }
        else{
            for(int div = 1; div < num - 1 ; div++){
                if(num % div == 0){
                    result++;
                }
            }
            if(result == 1){
                printf("%d\n", num);
            }
            result = 0;
            
        }
    }
}