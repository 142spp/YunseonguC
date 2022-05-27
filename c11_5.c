#include <stdio.h>

int main(void){
    char str[100],max=0,len=0;
    printf("input string : ");
    scanf("%s",str);

    for(int i=0; 1; i++){
        if(str[i]==0){
            printf("%c",max);
            break;
        }
        else if(max<(int)str[i]){
            max=(int)str[i];
        }
    }
    return 0;
}