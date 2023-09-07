#include <stdio.h>
#include <math.h>

int main(){

    int num, sum, rem;
    printf("Enter the number: \n");
    scanf("%d", &num);
    int original = num;

    while(num> 0){
        rem = num % 10;
        sum += pow(rem,3);
        num = num / 10;
    }
    printf("the sum is %d\n", sum);
    if(sum == original){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }

}