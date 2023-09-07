#include <stdio.h>
// the function to swap the numbers 
void swap(){
    int num1, num2, temp;
    printf("Enter num1\n");                // taking user input 
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d", &num2);

    temp = num1; 
    num1 = num2;
    num2 = temp;
    printf("num 1 is %d\n", num1);          // displaying the output
    printf("num 2 is %d\n", num2);

}
int main(){

    swap();                                 // calling the function
}
