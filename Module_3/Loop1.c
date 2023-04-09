#include<stdio.h>

int main(){

    int a;
    
    while(a>0){
        scanf("%d ", & a);

        printf("We will go to UTAH!\n");
        a--;
    }
    
    printf("\n");

   for(a=5; a<10; a+=2){
        printf("%d \n", a);
    }

    return 0;
}