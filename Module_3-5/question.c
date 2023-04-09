#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
       for(N=0; N>=0;  N++){
        printf("%d", N);       
        if(N%5==0){
            printf(" yes\n");            
        }else{
            printf(" no\n");
        }
        
    }
    return 0;
}