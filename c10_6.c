#include <stdio.h>

int main(void){
    int n,h,m,s;
    printf("input seconds : ");
    scanf("%d",&n);

    h=n/(60*60);
    m=(n-h*60*60)/60;
    s=n-h*60*60-m*60;

    printf("h:%d, m:%d, s:%d \n",h,m,s);
}