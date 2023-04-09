#include<stdio.h>
// add all numbers together from 10 to 0

int main(){

    int sum =0;
    int i;
    for(i=0; i<=5; i++){
       sum= sum + i;  // works

       // sum+=i; works

    // int sum = sum +i; does not work
          
    }
    printf("%d \n",sum);
    
    return 0;
}