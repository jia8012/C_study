#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int num = 1;
	int i = 0;
	for ( num = 1; num < 1000; num++)
	{
		int j = 0;//������ӵĺ�
		for (i = 1; i < num ; i++)
		{
			if (num%i == 0)
			{
				j += i;
				if (num == j)
				{
					printf("%d ", num);
				}
			}
		}
	}
	return 0;
}