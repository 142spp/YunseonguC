#include <stdio.h>

int main(void){
    int n1,sum=1;
    printf("input number : ");
    scanf("%d",&n1);
    for(int i=1; i<=n1; i++)
    {
        sum*=i;
    }
    printf("%d",sum);
    return 0;
}