#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int A[10] = { 0 };
//	int B[10] = { 0 };
//	int i = 1;
//	for ( i = 0; i <10 ; i++)
//	{
//		scanf("%d %d", &A[i], &B[i]);			   
//	}
//	for (i = 0; i <10; i++)
//	{
//		printf("A[%d]=%d ", i, A[i]);
//	}
//	printf("\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("B[%d]=%d", i, B[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		B[i] = A[i] ^ B[i];
//		A[i] = A[i] ^ B[i];
//		B[i] = A[i] ^ B[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("A[%d]=%d ", i, A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("B[%d]=%d ", i, B[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 2;
//	double sum = 0.0;
//	for ( i = 1, j = 2 ; i <100 ,j<=100 ; i+=2, j+=2)
//	{
//		sum = sum + (1.0/i -1.0/ j);
//		
//	}
//	printf("%lf", sum);
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	int j = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			j++;
//	}
//	printf("%d", j);
//	return 0;
//}

//int main()
//{
//	int i, j ;
//	for (i = 0; i < 11; i++)
//	{
//		for (j=0; j<11; j++)
//		{
//			if ((i + j) >4 && (i+j)<16 && (j-i)<6 && (i-j)<6)
//				printf("*");
//			else
//			{
//                 printf(" ");
//			} 
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			for (c = 0; c < 10; c++)
//				if ((a * 100 + b * 10 + c) == a * a*a + b * b*b + c * c*c)
//					printf("%d%d%d ", a, b, c);
//		}
//	}
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int n, i, j,k;
//	int Sn=0;
//	printf("请输入一个个位数\n");
//	scanf("%d", &n);
//	for (i = 1, j = 4; i <= 5, j >= 0; i++, j--)
//	{
//		k = pow(10, j);
//		Sn = Sn + i * k * n;
//	}
//	printf("%d", Sn);
//	return 0;
//}