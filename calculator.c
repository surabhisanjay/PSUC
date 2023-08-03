#include <stdio.h>

void add(){
    int a ; 
    int b ; 
    int sum ; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is %d\n", sum);
}
void subtract(){
    int a ; 
    int b ; 
    int diff ; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    diff = a - b;
    printf("The diference is %d\n", diff);
}
void division(){
    int a ; 
    int b ; 
    int quotient ; 
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    quotient = a / b;
    printf("The quotient is %d\n", quotient);
}
void remainderfunc(){
    int a ; 
    int b ; 
    int remainder; 

    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d", &b);
    remainder = a % b;
    printf("The remainder is %d\n",remainder);
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
    }
   
}
int main (){
    int choice;
    int answer = 1  ; 
    while (1){
        calculator();
        printf("Play again?\n0 for No\n 1 for Yes");
        scanf("%d", &answer);
        if (answer == 1){
            calculator();
        }
        else {
            break;
        }
}
}
