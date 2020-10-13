#include <stdio.h>

int main()
{
	int stomach = 0, i, apple_no;
	scanf("%d", &apple_no);

	for (i = 1; i <= apple_no; i++)
	{
		if (stomach == 0)
		{
			stomach += 1;
			printf("Number of apple can eat = %d\n", stomach);
		}
		else
		{
			break;
		}
	}

	return 0;
}
