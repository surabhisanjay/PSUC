#include <stdio.h>
#include <math.h>

int main()
{
	float x, ang ,sum=0;
	int i,j,limit;

	printf("Enter the value of x of sinx series: ");
	scanf("%f",&x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);

	ang = x;
	x = x*(3.1415/180); //converting into radians
    int fact = 1;
    int minus = 1;
	for(i=1;i<=2*limit;i++)
	{
        fact = fact*i;  
       
        if(i%2 != 0){
            sum += minus*(pow(x,i)/fact);
            minus = -(minus);
        }
		
	}
	printf("sin(%0.1f): %f",ang ,sum);
	return 0;
}
