#include <stdio.h>

int main(void){
    char arr[100];
    printf("input string : ");
    scanf("%s",arr);
    for(int i=0; 1; i++){
        if(arr[i]==0){
            printf("%d",i);
            break;
        }
    }  
    return 0;
}