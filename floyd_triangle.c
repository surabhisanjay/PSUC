#include <stdio.h>

int main(){

    int n;
    int i,j;
    int num = 1;
    scanf("%d", &n);
    for (i=0;i < n; i++){
        for (j = 0; j <= i; j++){
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
}