#include <stdio.h>

int main()
{
	int i, n, sum = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
		//printf("sum = %d\n", sum);
	}
	printf("Sum = %d\n", sum);

	return 0;
}
