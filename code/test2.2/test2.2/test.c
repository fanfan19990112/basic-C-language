#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	double array[3][12] = {
//						{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5 },
//						{ 59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5 },
//						{ 34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0 } 
//						};
//	double(*p)[3][12] = &array;
//	int m, n;
//	printf("请输入待查询的年月 : ");
//	scanf("%d-%d", &m, &n);
//
//	m -= 2014;
//	n = n - 1;
//
//	if ( m < 0 || m>2 || n < 0 || n>12)
//		printf("该月份未被收录\n");
//	else
//		printf("%d年%d月广州的PM2.5值是: %.1lf\n", m + 2014, n + 1, *(*(*p + m) + n));
//
//	return 0;
//}

//int main()
//{
//	void a;
//
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	int array[5] = { 1, 2, 3, 4, 5 };
//	int *pi = &array[2];
//	void *pv;
//
//	pv = pi;
//	pv++;
//	pi = pv;
//
//	printf("%d\n", *pi);
//
//	return 0;
//}

//
//int main()
//{
//	int m, p, n;
//	int i, j, k, row;
//
//	// 定义第一个矩阵
//	printf("请输入第一个矩阵的尺寸(M * P)：");
//	scanf("%d * %d", &m, &p);
//	int matrix_in_1[m][p];
//
//	// 定义第二个矩阵
//	printf("请输入第一个矩阵的尺寸(P * N)：");
//	scanf("%d * %d", &p, &n);
//	int matrix_in_2[p][n];
//
//	// 初始化存放乘积的二维数组
//	// VAL数组不支持直接初始化操作
//	int matrix_out[m][n];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			matrix_out[i][j] = 0;
//		}
//	}
//
//	// 让用户输入第一个矩阵
//	printf("请输入第一个矩阵的值：\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			scanf("%d", &matrix_in_1[i][j]);
//		}
//	}
//
//	// 让用户输入第二个矩阵
//	printf("请输入第二个矩阵的值：\n");
//	for (i = 0; i < p; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &matrix_in_2[i][j]);
//		}
//	}
//
//	// 计算乘积并保存
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			for (k = 0; k < p; k++)
//			{
//				matrix_out[i][j] += matrix_in_1[i][k] * matrix_in_2[k][j];
//			}
//		}
//	}
//
//	printf("计算结果如下：\n");
//
//	// row 取行数最大值
//	row = m > p ? m : p;
//
//	for (i = 0; i < row; i++)
//	{
//		printf("|  ");
//		// 打印 matrix_in_1
//		for (j = 0; j < p; j++)
//		{
//			if (i < m)
//			{
//				printf("\b%d ", matrix_in_1[i][j]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b     ");
//			}
//		}
//		// 打印 * 号
//		if (i == row / 2)
//		{
//			printf(" * ");
//		}
//		else
//		{
//			printf("   ");
//		}
//		printf("|  ");
//		// 打印 matrix_in_2
//		for (j = 0; j < n; j++)
//		{
//			if (i < p)
//			{
//				printf("\b%d ", matrix_in_2[i][j]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b     ");
//			}
//		}
//		// 打印 = 号
//		if (i == row / 2)
//		{
//			printf(" = ");
//		}
//		else
//		{
//			printf("   ");
//		}
//		// 打印 matrix_out
//		printf("|  ");
//		for (j = 0; j < n; j++)
//		{
//			if (i < m)
//			{
//				printf("\b%d ", matrix_out[i][j]);
//				printf("|");
//			}
//			else
//			{
//				printf("\b\b\b      ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char* pArray[4] = { "Hello!","How are you?","Fine,thank you,And you?","I'm fine too" };
//	int i;
//
//	char *(*parr)[4] = &pArray;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", (*parr)[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[4][3][2] = {
//		{
//			{ 'a', 'b' },{ 'c', 'd' },{ 'e', 'f' }
//		},
//		{
//			{ 'g', 'h' },{ 'i', 'j' },{ 'k', 'l' }
//		},
//		{
//			{ 'm', 'n' },{ 'o', 'p' },{ 'q', 'r' }
//		},
//		{
//			{ 's', 't' },{ 'u', 'v' },{ 'w', 'x' }
//		}
//	};
//	char(*pa)[2] = &a[1][0];
//	char(*ppa)[3][2] = &a[1];
//	
//	printf("%c\n", *((*(pa + 8) + 1)));
//	printf("%c\n", *(*((*(ppa + 2) + 2))) + 1);
//
//
//	return 0;
//}

//int main()
//{
//	int num = 520;
//	void *p;
//
//	p = &num;
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//int main()
//{
//	int num = 520;
//	const int* p = &num;
//	const int* *q = &p;
//
//	printf("%d\n", **q);
//
//	return 0;
//}

//int main()
//{
//	int p = 12345678;
//	if ((char)p == 78)
//		printf("小端输出\n");
//	else
//		printf("大端输出\n");
//
//	return 0;
//}