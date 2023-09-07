#include <stdio.h>
int swap(){
    int temp;
    int a , b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);
    temp = b ;
    a = b ;
    a = temp ;
    printf("the numbers a and b are %d and %d", a, b);
    return 0;

}
int main() {
   int c;
    c = swap();
    return 0;

}



