#include <stdio.h>

int main(void)
{
	int i, j, num;

	scanf("%d", &num);

	for (i = 0; i < num; ++i)
	{
		for (j = 0; j < num - i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}