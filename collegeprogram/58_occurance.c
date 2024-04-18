#include<stdio.h>
int main(){
    int a[5];
    printf("enter the array element = ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int num;
    printf("enter the number = ");
    scanf("%d", &num);
    int count = 0;
    for(int i = 0; i<5; i++){
        if(num == a[i]){
            count += 1;
        }
        
    }
    printf("number repeat = %d", count);

}