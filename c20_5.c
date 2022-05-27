#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aprintf(char a[], char b[], int index){
    if(index==0) printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!",a,b);
    else if(index==1) printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!",a,b);
    else if(index==2) printf("당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다!",a,b);
}

int main(void){
    srand((int)time(NULL));
    int n;
    char *choosen[]={" ","바위","가위","보"};
    int x=rand()%3+1;
    printf("바위는 1, 가위는 2, 보는 3 : ");
    scanf("%d",&n);
    if(choosen[n]==choosen[x]){
        aprintf(choosen[n],choosen[x],0);
    } else if(choosen[n+1]==choosen[x]||(n==3&&x==1)){
        aprintf(choosen[n],choosen[x],1);
    } else {
        aprintf(choosen[n],choosen[x],2);
    }
}