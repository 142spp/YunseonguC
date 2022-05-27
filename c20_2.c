#include <stdio.h>

void printarr(int num, int (*arr)[num]){
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int arr[num][num];
    int temp=1, raw=0, col=0, shift=0;

    for(int i=0; i<num;i++){
        arr[0][col]=temp;
        col++;
        temp++;
    }
    
    col-=1;
    raw++;
    shift++;

    while(temp<=num*num){
        if(num-shift<0){
            break;
        }

        for(int j=0; j<num-shift;j++){
            arr[raw][col]=temp;
            temp++;
            raw++;
        }
        col--;
        raw--;
        
        for(int j=0; j<num-shift; j++){
            arr[raw][col]=temp;
            temp++;
            col--;
        }
        col++;
        raw--;

        shift++;

        if(num-shift<0){
            break;
        }
        
        for(int j=0; j<num-shift;j++){
            arr[raw][col]=temp;
            temp++;
            raw--;
        }
        col++;
        raw++;

        for(int j=0; j<num-shift; j++){
            arr[raw][col]=temp;
            temp++;
            col++;
        }
        col--;
        raw++;

        shift++;
    }

    printarr(num,arr);
}