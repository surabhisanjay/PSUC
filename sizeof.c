#include <stdio.h>
#include <math.h>
int main(){

    int number; 
    char c;
    long int long_num; 
    float f;
    double d;
    
    int sizeof_number;
    int sizeof_c;
    int sizeof_long_num;
    int sizeof_f;
    int sizeof_d;

    printf("enter the integer:\n");
    scanf("%d", &number);
    printf("enter the float:\n");
    scanf("%f", &f);
    printf("enter the character:\n");
    scanf("%c", &c);
    printf("enter the double:\n");
    scanf("%lf", &d);
    printf("enter the long int:\n");
    scanf("%ld", &long_num);

    printf("the sizes of int, float, character, double and long int are:\n");
    printf("%d\n%d\n%d\n%d\n%d\n", sizeof_number,sizeof_f,sizeof_c, sizeof_d, sizeof_long_num);






}