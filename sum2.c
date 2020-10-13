#include <stdio.h>

int main()
{
	int num, sum;
	scanf("%d", &num);

	sum = (num * (num + 1)) / 2;
	printf("Sum = %d\n", sum);
	
	return 0;
}
