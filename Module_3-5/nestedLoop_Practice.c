/* make a pattern like below
0
10
210
3210
43210
543210
6543210
76543210
876543210
9876543210
109876543210
//https://www.youtube.com/watch?v=exbCDwrElcw
*/

#include<stdio.h>
int main(){
    for(int i=0; i<11;i++){
        
        for(int j=i; j>=0; j--){
            printf("%d", j);
        }
    
    printf("\n");
    }

    return 0;
}