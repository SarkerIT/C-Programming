#include<stdio.h>
int main(){
    int USD;

    scanf("%d", & USD);

    if(USD >= 100){
        printf("Buy stock now!");
    }else{
        printf("Do not buy stock, save it for your meal!");
    }

return 0;
}