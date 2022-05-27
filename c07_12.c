#include <stdio.h>

int main(void){
    int n1,n2,sum=0;
    printf("input numbers : ");
    scanf("%d %d",&n1,&n2);
    for(int i=n1; i<=n2; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}