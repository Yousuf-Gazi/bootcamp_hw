#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is an Even number\n", num);
	}
	else
	{
		printf("%d is a Odd number\n", num);
	}

	return 0;
}
