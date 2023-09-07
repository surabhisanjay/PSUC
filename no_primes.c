#include <stdio.h>

int main(){

    int num;
    int no_primes = 0;
    int div = 2;
    int rem;
    int isprime = 1;
    int no_comp = 0;
    int i;
    do{
        printf("enter the number: \n");
        scanf("%d", &num);
        isprime = 1;
        div = 2;
        //checking if it is prime or not:
        while (isprime!=0 && div < num/2)
        {
        rem = num%div;
        if(rem == 0){
            no_comp++;
            isprime = 0;
        }
        div++;
        }
        if(isprime != 0){
            no_primes++;
        }
        } while(num!=-1);

        printf("no of primes are %d and no of comp are %d", no_primes-1, no_comp);
    }

    
   