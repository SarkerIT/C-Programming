#include<stdio.h>
int main(){
    int taka;
    scanf("%d", & taka);

    if(taka>20000){
        printf("Gucci Bag\nGucci Belt");
    }else if (taka==20000){
        printf("Levis bag");
    }else if (taka<20000 && taka >=6500){
        printf("Levis Bag");
    }else{
        printf("Something");
    }
    
    return 0;
}