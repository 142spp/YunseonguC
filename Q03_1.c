#include <stdio.h>

int main(void){
    /*
    int num1, num2;
    printf("input numbers : ");
    scanf("%d %d",&num1, &num2);
    printf("%d + %d = %d", num1, num2, num1+num2);
    */

    /*
    int num1, num2, num3;
    printf("input numbers : ");
    scanf("%d %d %d", &num1,&num2,&num3);
    printf("%d * %d + %d = %d",num1, num2, num3, num1*num2+num3);
    */

    /*
    int num;
    printf("input number : ");
    scanf("%d",&num);
    printf("%d",num*num);
    */

    /*
    int num1,num2;
    printf("input : ");
    scanf("%d %d",&num1, &num2);
    printf("몫: %d 나머지: %d",num1/num2,num1%num2);
    */

    int num1,num2,num3 ;
    printf("input 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("(%d-%d)(%d+%d)(%d/*%d)=%d",num1,num2,num2,num3,num3,num1,(num1-num2)*(num2+num3)*(num3%num1));
}

