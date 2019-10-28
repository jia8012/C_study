#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ÅÐ¶Ï»ØÎÄÊý
int main()
{
	long num, s, y = 0;
	printf("Please input numbers: ");
	scanf("%d", &num);
	s = num;
	while (s > 0) {
		y = y * 10 + s % 10;
		s = s / 10;
	}
	if (y == num && y > 0)
	{
		printf("true");
	}
	else
	{
		printf("flase");
	}

	return 0;
}