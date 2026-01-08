#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {0};

	int *pB = b, *pA = a;
	while (pB < b + 5)
	{
		*pB++ = *pA++;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\t", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
	}

	return 0;
}
