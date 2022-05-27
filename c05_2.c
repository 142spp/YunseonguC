#include <stdio.h>

int main(void){
    double n1, n2 ;
    printf("input : ");
    scanf("%lf %lf",&n1,&n2);

    printf("+ : %f\n- : %f\n* : %f\n/ : %f",n1+n2,n1-n2,n1*n2,n1/n2);
}