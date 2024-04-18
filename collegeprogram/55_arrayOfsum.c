#include<stdio.h>
int main(){
    int a[5];
    printf("enter the array element = ");
    for(int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(int i = 0; i<5; i++){
        sum = sum + a[i];
    }

    printf("sum = %d", sum);



    return 0;
}