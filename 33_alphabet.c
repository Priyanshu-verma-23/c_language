


#include<stdio.h>
int main(){
    char b;
    printf("enter your character = ");
    scanf("%c" , &b);
    switch(b){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("enter character is vowel");
            break;

        default:
            printf("enter character is consonent");
            break;

    }
}