#include <stdio.h>
#include <math.h>


int main(void)

{

       

        int num, count, count_all=0;
        double root;

 

        printf("소수를 구하고 싶은 범위를 입력하세요 (1~입력값) : ");

        scanf("%d", &num);

        for (int i = 1; i <= num; i++) {

               count = 0;

               for (int j = 2; j <= sqrt(i); j++) {

                       if (i%j == 0) {

                           count+=1;

                            break;

                             

                       }
                    }
                if(i<2)
                    count=1;
                if(count==0){
                    printf("%d\n",i);

                    count_all++;

                    

               }
        }

        printf("1에서 %d까지 총 %d개의 소수가 있습니다.\n", num,count_all);

}
