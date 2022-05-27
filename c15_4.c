#include <stdio.h>

void is_Palindrome(char *str,int len){
    for(int i=0; i<=len/2; i++){
        if(str[i]!=str[len-i]){
            printf("this is not Palindrome");
            break;
        }
        if(i==len/2){
            printf("thins is Palindrome");
        }
    }
}

int main(void){
    int len;
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);

    for(int i=0; 1; i++){
        if(str[i]=='\0'){
            len=i;
            break;
        }
    }
    is_Palindrome(str,len-1);
}