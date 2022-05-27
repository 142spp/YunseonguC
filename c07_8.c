#include <stdio.h>

int main(void){
    int n1=1, n2 ;
    
    while(n1<10){
        n2=1;
        while(n2<10){

            printf("%d * %d = %d \n",n1,n2,n1*n2);
            n2++;
        }
        n1++;    
    }
    

    return 0;
}