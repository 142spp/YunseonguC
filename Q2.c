#include <stdio.h> 
int main(void)
{
	int i, j, k;
	int n=0;
	
	for (i=1; i<10; i=i+1) 
		for (j=1; j<10; j=j+1)
			for (k=1; k<10; k=k+1) 
				n=n+1;

	 printf("n=%d\n",n);		// 1

	n=0;
	for (i=1; i<10; i=i+1) 
		for (j=i; j<10; j=j+1)
			for (k=j; k<10; k=k+1) 
				n=n+1;

	 printf("n=%d\n",n);		// 2

    return 0;
}