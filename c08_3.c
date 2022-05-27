#include <stdio.h>

int main(void){
    int n1,n2,n;
    printf("input numbers : ");
    scanf("%d %d",&n1,&n2);

    n = n1>n2 ? n1-n2 : n2- n1;

    printf("%d",n);

    return 0;

}