#include <stdio.h>
float CelToFah(float);

int main(void){
    float num;
    printf("input Celsius : ");
    scanf("%f",&num);
    printf("Fahrenheit : %f",CelToFah(num));
    return 0;
}

float CelToFah(float num){
    return 1.8*num+32;
}