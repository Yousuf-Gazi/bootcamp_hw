#include <stdio.h>

int main()
{
	int i, num;
	long long int factorial = 1;
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		factorial *= i;
		//printf("%d factorial is = %lli\n", num, factorial);
	}
	printf("%d factorial is = %lli\n", num, factorial);

	return 0;
}
