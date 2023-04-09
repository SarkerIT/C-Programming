#include<stdio.h>
int main(){
    int USD;

    scanf("%d", & USD);

    if(USD <= 100){
        printf("Do not buy stock, save it for your meal!");
    }else if(USD <=500){
        printf("Buy stocks worth USD 300.00 Only and save the rest.");
    }else{
        printf("Buy stocks aggressively!");
    }

return 0;
}