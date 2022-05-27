#include <stdio.h>

int main(void){
    int num1, num2;

    printf("input number1 : ");
    scanf("%d", &num1);
    printf("input number2 : ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d /* %d = %d\n",num1,num2,num1%num2);
    
    return 0;
}