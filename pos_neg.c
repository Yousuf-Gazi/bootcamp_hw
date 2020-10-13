#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	if (number > 0)
	{
		printf("%d is postive\n", number);
	}
	else if (number == 0)
	{
		printf("%d is neutral\n", number);
	}
	else
	{
		printf("%d is negative\n", number);
	}

	return 0;
}
