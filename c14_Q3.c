#include <stdio.h>

void Swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

void Swap3(int *n1,int *n2, int *n3){
    Swap(n1,n2);
    Swap(n1,n3);
}

int main(void){
    int n1, n2, n3;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    Swap3(&n1,&n2,&n3);
    printf("%d %d %d",n1,n2,n3);

    return 0;
}