#include <stdio.h>
void Fibo(int);

int main(void){
    int num;
    printf("input number : ");
    scanf("%d",&num);
    Fibo(num);
}

void Fibo(int num){
    int n1=0, n2=1,t1;
    for(int i=0; i<num; i++){
        printf("%d \n",n1);
        t1=n1;
        n1+=n2;
        n2=t1;
    }
}