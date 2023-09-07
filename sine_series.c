#include <stdio.h>
#include <math.h>
int main(){
    float sinx = 0;
    int x;
    int n;
    int i,j;
    printf("Enter the value of x and n\n");
    scanf("%d %d", &x, &n);
    x = x * (3.1415/180);
    int minus = -1;
    int f = 1;
    for (i = 1; i <= 2*n; i++){
        f = i*f; 
        
        if(i%2!=0){
            minus -= -1;
            sinx += minus*(pow(x, i)/f);
            printf("factorial is %d\n",f);
            printf("sinx is %0.1f\n", sinx);
        }
        
    }
    printf("sinx is %0.1f", sinx);

}