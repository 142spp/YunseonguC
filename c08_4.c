#include <stdio.h>

int main(void){
    int score_kor,score_eng,score_math,ave=0;

    printf("input your scores : ");
    scanf("%d %d %d",&score_kor,&score_eng,&score_math);

    ave=(score_kor+score_math+score_eng)/3;

    if(ave>=90){
        printf("A");
    }
    else if(ave>=80){
        printf("B");
    }
    else if(ave>=70){
        printf("C");
    }
    else if(ave>=60){
        printf("D");
    }
    else {
        printf("F");
    }

    return 0;
}