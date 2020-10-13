#include <stdio.h>

int main()
{
	int num, i;
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d fizz buzz\n", i);
		}
		else if (i % 5 == 0)
		{
			printf("%d buzz\n", i);
		}
		else if (i % 3 == 0)
		{
			printf("%d fizz\n", i);
		}
	}

	return 0;
}
