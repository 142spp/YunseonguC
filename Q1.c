#include <stdio.h> 
int main(void)
{
	int n1, n2, n3;
	int nx=0, ny=0;

	printf(" Enter three integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 < n2)
		if (n1 < n3) nx = n1;
	else nx = n3;

	if (n1 < n2) {
		if (n1 < n3) ny = n1;
	}
	else ny = n3;

	printf("nx=%d, ny=%d\n", nx, ny);

        return 0;
}