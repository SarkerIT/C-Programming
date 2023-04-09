#include<stdio.h>
int main(){

    int a, b;
    a=10, b=25;
    int sum=a+b;

    printf("Addition Result is = %d", sum);

    int multi=a*b;
    printf("\nMultiplication Result is = %d", multi);

    int division = b/a;
    printf("\nDivision result is = %d", division);

    int mod = a%b;
    printf("\nModulus is = %d", mod);


    float div2 = (float) b/a;
    printf("\nFloat division is = %f", div2);
    return 0;


}