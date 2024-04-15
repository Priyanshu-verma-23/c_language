#include<stdio.h>
int main(){
    int num, i = 2, div = 0, b;
    printf("enter the number = ");
    scanf("%d", &num);


    check_prime:
    if (i <= num / 2) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            div += 1;
            goto end;
        }
        i++;
        goto check_prime;
    }


   if(div == 0){
    printf("enter number is prime");
   }
   end:

   return 0;





}
