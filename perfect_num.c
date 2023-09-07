#include <stdio.h>

int main(){
    int sum = 0;
    int num;
    int i = 1;
    scanf("%d", &num);
    int temp = num;

    while (i <= num/2){
        if(num % i == 0){
            sum += i;
            printf("%d\n",i);
        } 
        i++;
    }
    if (sum == temp){
        printf("the number is perfect");

    }
    else{
        printf("the number is not perfect");
    }
}