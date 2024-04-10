// wap to print even number from 1 to n using while statement


#include<stdio.h>
int main(){
    int i = 0, n;
    printf("kaha tak chaiye = ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}