#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = (a+b);
    printf("%d + %d = %d", a, b, sum);

    int sub = (a-b);
    printf("\n%d - %d = %d", a, b, sub);

    int mult = (a*b);
    printf("\n%d * %d = %d", a, b, mult);

    float div = (float) a/b;
    printf("\n%d / %d = %.2f", a, b, div);
    
    return 0;
}