#include <stdio.h>

int main(){

    int i, j, n;
    int a[5] = {1,5,6,12,7};
    n = 5;
    int temp = 0;
    int flag = 0 ;

    for (i = 0; i < n-1; i++){
        for (j = 0; j <= n-1; j++){
            if (a[j] > a[j+1]){
            temp = a[j];
            a[j] = a [j+1];
            a[j+1] = temp;
            }   
        }
    }
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }


}