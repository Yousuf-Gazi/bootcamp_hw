#include <stdio.h>

int main()
{
	int base, power, value = 1, i;
	scanf("%d %d", &base, &power);

	for (i = 1; i <= power; i++)
	{
		value *= base;
		//printf("Value = %d\n", value);
	}
	printf("Value = %d\n", value);

	return 0;
}
