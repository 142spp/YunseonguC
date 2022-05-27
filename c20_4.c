#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n;
    srand((int)time(NULL));
    printf("주사위 굴리는 횟수 : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("주사위 %d 의 결과 : %d \n",i+1,rand()%6+1);
        
    }
    return 0;
}