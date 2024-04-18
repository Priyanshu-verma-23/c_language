#include<stdio.h>
int main(){
    int a[5];
    printf("enter the array element = ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int search;
    printf("enter the number = ");
    scanf("%d", &search);
    int count = 0;
    for(int i = 0; i<5; i++){
        if(search == a[i]){
            printf("number is find");
            break;
        }
        else{
            count += 1;
        }
    }
    if(count == 5){
        printf("number is not find");
    }

}