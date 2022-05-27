#include <stdio.h>

int main(){
    int ch;
    while(1){
        ch=getchar();
        if('A'<=ch&&ch<='Z'){
            putchar(ch-'A'+'a');
        }
        else if('a'<=ch&&ch<='z'){
            putchar(ch+'a'-'A');
        }
        else{
            printf("\nerror");
            break;
        }
        
    }
    return 0;
}   