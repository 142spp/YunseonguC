#include <stdio.h>

int main(void){

    int i=1,n=1,m=0;

    while(i!=0){
        printf("input number : ");
        scanf("%d",&i);
        m+=i;
        n++;
    }
    printf("%f",(float)m/n);
    return 0;
}