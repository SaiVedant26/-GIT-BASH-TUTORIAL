#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;
	printf("Enter the temperature in Celcius \n");
    scanf("%f",&c);
    f=((9.0/5.0)*c)+32;
    printf("\nThe temperature in Fahrenheit is\n %f",f);
    return 0;
}

