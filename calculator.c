#include <stdio.h>

int add(){
    int a ; 
    int b ; 
    int sum ; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    sum = a + b;
    return sum;
}
int subtract(){
    int a ; 
    int b ; 
    int diff ; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    diff = a - b;
    return diff;
}
float division(){
    int a ; 
    int b ; 
    float quotient ; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    quotient = a / b;
    return quotient;
}
int remainderfunc(){
    int a ; 
    int b ; 
    int remainder; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    remainder = a % b;
    return remainder;
}
void calculator(){
    int choice;
    printf("Menu:\n1.Add\n2.Subtract\n3.Division\n4.Remainder\n");
    scanf("%d", &choice);
    switch (choice){
        case 1 : 
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            division();
            break;
        case 4:
            remainderfunc();
            break;
        default: 
    }
    
}
/* 
int main (){
    int choice;
    int answer = 1  ; 
    while (1){
        calculator();
        printf("Play again?\n0 for No\n1 for Yes\n");
        scanf("%d", &answer);
        if (answer == 1){
            calculator();
        }
        if (answer == 0){
            break;
        }
    }
}

*/
