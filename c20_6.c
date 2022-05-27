#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand((int)time(NULL));
    int col[3]={0,0,0};
    while(col[0]==col[1]||col[0]==col[2]||col[1]==col[2]){
        for(int i=0; i<3; i++){
            col[i]=rand()%10;
        }
    }
    //printf("%d %d %d\n",col[0],col[1],col[2]);
    int strike=0,ball=0;
    int n1,n2,n3;
    printf("Start Game!\n");
    while(strike!=3){
        strike=0,ball=0;
        printf("choose 3 number : ");
        scanf("%d %d %d", &n1,&n2,&n3);
        int n[3]={n1,n2,n3};
        for(int i=0; i<3; i++){
            if(n[i]==col[i]){
                strike+=1;
            } else{
                for(int j=0; j<3; j++){
                    if(n[i]==col[j]){
                        if(n[j]!=col[j])
                            ball+=1;
                    }
                }
            }
        }
        printf("strike: %d ball: %d\n",strike,ball);
    }
    printf("game over!");
}