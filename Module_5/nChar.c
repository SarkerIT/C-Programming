#include<stdio.h>
int main(){

    char i;
        scanf("%c", &i);
    if(i>='a' && i<='z'){
        int ans = i-32;
        printf("%c", ans);
    }else{
        int ans = i+32;
        printf("%c", ans);
    }
    
    return 0;
}