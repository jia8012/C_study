#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int n, j, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		{for (j = 0; j < 2 * n - i - 1; j++)
			if (j == 2 * n - i - 2 || j == i || i == 0)
			{
				printf("*");
			}
			else { printf(" "); }
		}
		printf("\n");
	}
}
