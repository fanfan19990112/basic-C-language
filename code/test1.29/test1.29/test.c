#define _CRT_SECURE_NO_WARNINGS
//二维数组作业练习
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int a[4][5] = {
//		{ 1, 2, 3, 4, 5 },
//		{ 6, 7, 8, 9, 10 },
//		{ 11, 12, 13, 14, 15 },
//		{ 16, 17, 18, 19, 20 } };
//
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d ", a[i][j]);
//			if (i + j == 3)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\n");
//
//	return 0;
//}

//#define M 2
//#define N 2
//#define P 3
//
//int main()
//{
//	int a[M][P] = { 1,2,3,4,5,6 };
//	int b[P][N] = { 1,4,2,5,3,6 };
//	int c[M][N] = { 0 };
//	int i, j, k;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			for (k = 0; k < P; k++)
//			{
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//
//	int row = M > P ? M : P;
//
//	for (i = 0; i < row; i++)
//	{
//		printf("|  ");
//		for (j = 0; j < P; j++)
//		{
//			if (i < M)
//			{
//				printf("\b%d ", a[i][j]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b     ");
//			}
//		}
//		if (i == row / 2)
//			printf(" * ");
//		else
//			printf("   ");
//		printf("|  ");
//		for (j = 0; j < N; j++)
//		{
//			if (j < P)
//			{
//				printf("\b%d ", b[i][j]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b     ");
//			}
//		}
//		if (i == row / 2)
//			printf(" = ");
//		else
//			printf("   ");
//		printf("|  ");
//		for (k = 0; k < N; k++)
//		{
//			if (i < M)
//			{
//				printf("\b%d ", c[i][k]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b     ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define MAX 5
//
//int main()
//{
//	char ch1[MAX][100];
//	int i = 0, j = 0;
//	size_t min, max, temp;
//	for (i = 0; i < MAX; i++)
//	{
//		printf("请输入第%d句话：", i + 1);
//		while ((ch1[i][j++] = getchar()) != '\n')
//			;
//		ch1[i][j] = '\0';
//		j = 0;
//	}
//	min = 0;
//	max = min;
//
//	printf("你输入了下边%d句话：\n", MAX);
//
//	// 打印每句口号，同时比较长度
//	for (i = 0; i < MAX; i++)
//	{
//		printf("%s\n", ch1[i]);
//		temp = strlen(ch1[i]);
//		min = temp < strlen(ch1[min]) ? i : min;
//		max = temp > strlen(ch1[max]) ? i : max;
//	}
//
//	printf("其中最长的是：%s\n", ch1[max]);
//	printf("其中最短的是：%s\n", ch1[min]);
//	return 0;
//}

//指针作业练习

//int main()
//{
//	printf("%p\n", &110);
//
//	return 0;
//}

//int main()
//{
//	int *a, b;
//
//	b = 110;
//	a = &b;
//
//	printf("%d\n", *a);
//
//	return 0;
//}

//int main()
//{
//	int a = 110;
//	int *b = &a;
//
//	*b = *b - 10;
//
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int* d, *e, *f, *g ;
//	printf("请输入三个数 : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	d = &a;
//	e = &b;
//	f = &c;
//
//	if (a > b)
//	{
//		g = d;
//		d = e;
//		e = g;
//	}
//	if (a > c)
//	{
//		g = d;
//		d = f;
//		f = g;
//	}
//	if (b > c)
//	{
//		g = e;
//		e = f;
//		f = g;
//	}
//
//	printf("%d <= %d <= %d\n", *d, *e, *f);
//	
//	return 0;
//}

//int main()
//{
//	int n;
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	printf("请输入一个大于2的整数 ; ");
//	scanf("%d", &n);
//	ret = n*(n - 1) + 1;
//	for (i = 0; i < n; i++)
//	{
//		sum += ret;
//		ret += 2;
//	}
//	if (sum == pow(n, 3))
//	{
//		printf("%d = ", (int)pow(n, 3));
//		ret = n*(n - 1) + 1;
//		for (i = 0; i < n; i++)
//		{
//			printf("%d", ret);
//			if (i + 1 == n)
//				goto A;
//			printf(" + ");
//			ret += 2;
//			
//		}
//	}
//A:printf("\n");
//
//	return 0;
//}

//#define NUM 256
//#define ROW 128
//
//int main()
//{
// 	int n = 0;
//	int sum = 0;
//	int ret = 0;
// 	int i = 0;
//	int j = 0;
//	int p = 0;
//	int arr[ROW][NUM] = { 0 };
//	printf("请输入一个整数 ：");
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//	{
//		ret = i*(i - 1) + 1;
//		for (j = 0; j < i; j++)
//		{
//			sum += ret;
//			ret += 2;
//		}
//		if (sum == pow(i, 3))
//		{
//			ret = i*(i - 1) + 1;
//			for (j = 0; j < i + 1; j++)
//			{
//				if (j == 0)
//					arr[p][j] = sum;
//				else
//				{
//					arr[p][j] = ret;
//					ret += 2;
//				}
//			}
//		}
//		else
//		{
//			printf("其中%d不满足尼科彻斯定理\n", i);
//			goto A;
//		}
//			
//		p++;
//		sum = 0;
//	}
//	p = 0;
//	printf("经验证,3~%d之间的整数均满足尼科彻斯定理!\n", n);
//	
//	char ch;
//	printf("是否打印所有式子(y/n)：");
//	getchar();
//	scanf("%c", &ch);
//	if (ch == 'y')
//	{
//		for (i = 3; i <= n; i++)
//		{
//			printf("%d^3 = %d = ", i, arr[p][0]);
//			for (j = 1; j < i + 1; j++)
//			{
//				printf("%d", arr[p][j]);
//				if (j  == i)
//					break;
//				printf(" + ");
//			}
//			printf("\n");
//			p++;
//		}
//	}
//
//A: return 0;
//}