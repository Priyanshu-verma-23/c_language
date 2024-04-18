#include <stdio.h>
int main()
{
    int a[5];
    printf("enter the array element = ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int max = 0;
    for(int j = 0; j<5; j++){
        if(max < a[j]){
            max = a[j];
        }
    }

    printf("max number = %d", max);
    return 0;
}