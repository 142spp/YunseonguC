#include <stdio.h>
int biggestnum(int,int,int);
int smallestnum(int,int,int);

int main(void){
    int n1,n2,n3;
    printf("input three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Biggest : %d\nSmallest : %d",biggestnum(n1,n2,n3),smallestnum(n1,n2,n3));
    return 0;
}

int biggestnum(int num1, int num2, int num3){
    int res;
    res = num1 > num2 ? num1 : num2;
    res = num3 > res ? num3 : res;
    return res;
}

int smallestnum(int num1, int num2, int num3){
    int res;
    res = num1 < num2 ? num1 : num2;
    res = num3 < res ? num3 : res;
    return res;
}