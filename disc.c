#include <stdio.h>

int main(){

   int disc = 8;
   int y;

   scanf("%d", &disc);

   if(disc<0){
    y= -1;
   }
   if(disc>0){
    y = 1;
   }
    if (disc == 0){
    y = 0;

    }
    float root1 = 8.0;
    float root2 = 6.8;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("the numbers are\n");
    printf("%d %d %d",a, b, c);
    switch(y){
        case 1:
            printf("roots are real and distinct\n");
            printf("%0.1f %0.1f", root1, root2);
            
            break;
        case -1:
            printf("roots are not real");
            break;
        case 0:
            printf("roots are equal and real");
            printf("%f %f", root1, root2);
            break;
        
    
    }
}