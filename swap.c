#include <stdio.h>

int main ()
{
	float a, b, temp;
	scanf("%f %f", &a, &b);

	temp = a;
	a = b;
	b = temp;
	printf("A = %0.2f, B = %0.2f\n", a, b);

	return 0;
}
