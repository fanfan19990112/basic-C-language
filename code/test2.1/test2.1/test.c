#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *b;
//
//	b = &a[3];
//	printf("%d\n", b[-2]);
//
//	return 0;
//}

//int main()
//{
//	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = (int *)(&array + 1);
//
//	printf("%d\n", *(p - 6));
//
//	return 0;
//}

//int main()
//{
//	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[10] = &array;
//
//	printf("%d\n", *(*(p + 1) - 6));
//
//	return 0;
//}

//int main()
//{
//	char* array[5] = { "FishC","Five","Star","Good","WOW" };
//	char* (*ptr)[5] = &array;
//	int i = 0,  j;
//	for (j = 0; *(*(*ptr + i) + j) != '\0'; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			if (*(*(*ptr + i) + j) == '\0')
//				break;
//			printf("%c ", *(*(*ptr + i) + j));
//		}
//		i = 0;
//
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char matrix[3][5] = {
//		'I', 'l', 'o', 'v', 'e',
//		'F', 'i', 's', 'h', 'C',
//		'.', 'c', 'o', 'm', '!'
//	};
//	char *p;
//
//	p = &matrix[0][3];
//
//	printf("%c", *p);
//	printf("%c", *p++);
//	printf("%c", *++p);
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	char array[2][3][5] = {
//		{
//			{ 'x', 'x', 'x', 'x', 'x' },
//			{ 'x', 'x', 'o', 'x', 'x' },
//			{ 'x', 'x', 'x', 'x', 'x' }
//		},
//		{
//			{ 'x', 'x', 'x', 'x', 'x' },
//			{ 'x', 'x', 'o', 'x', 'x' },
//			{ 'x', 'x', 'x', 'x', 'x' }
//		}
//	};
//
//	printf("%c%c%c%c\n", *(*(*array + 1) + 2), *(*(*(array + 1) + 1) + 2), ***array, *(**array + 1));
//
//	return 0;
//}

//int main()
//{
//	int array[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[3] = (int(*)[3])&array;
//
//	printf("%d\n", p[2][2]);
//
//	return 0;
//}

//#define NUM 32
//��дһ�����򣬽����û������룬����ǰ 9 ���ַ��������ξ���3 * 3���ķ�ʽ���
//int main()
//{
//	char p[NUM] = { "\0" };
//	char (*ptr)[3] = (char(*)[3])&p;
//	int i = 0;
//	while ((p[i++] = getchar()) != '\n')
//		;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c ", *(*(ptr + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#define NUM 32
////��β����������ξ���ĳߴ磬Ҫ������Զ������û�������ַ����������������ξ�������������û����� 17 ���ַ������ 4 * 4 ����
//int main()
//{
//	char p[NUM] = { "\0" };
//	int i = 0;
//	int count = 0;
//	int n = 0;
//
//	while ((p[i++] = getchar()) != '\n')
//		count++;
//
//	for (n = 2; ;n++)
//		if((n*n <= count) && (((n + 1)*(n + 1)) > count))
//			break;
//
//	int k = n;
//	int j = k;
//	i = 0;
//
//	while (n--)
//	{
//		while (j--)
//			printf("%c ", p[i++]);
//		j = k;
//		printf("\n");
//	}
//
//	return 0;
//}

//��дһ�������û��������ѯ���·ݣ������ʽ��2015-03����������·ݵ� PM2.5 ֵ
//int main()
//{
//	float pm25[3][12] = {
//		{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5 },
//		{ 59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5 },
//		{ 34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0 }
//	};
//	int year, month;
//
//	printf("���������ѯ���·�(��-��): ");
//	scanf("%d-%d", &year, &month);
//
//	if (year < 2014 || year > 2016 || month < 1 || month > 12)
//	{
//		printf("�������ݴ���\n");
//	}
//	else
//	{
//		year -= 2014;
//		month -= 1;
//		if (pm25[year][month])
//		{
//			printf("%d��%d�¹��ݵ�PM2.5ֵ��: %.2f\n", year + 2014, month + 1, pm25[year][month]);
//		}
//		else
//		{
//			printf("��Ǹ�����·�δ��¼���ݣ�\n");
//		}
//	}
//
//	return 0;
//}

////���м�¼�����ݴ�ӡΪ����ֱ��ͼ
//int main()
//{
//	float pm25[3][12] = {
//		{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5 },
//		{ 59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5 },
//		{ 34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0 }
//	};
//	int i, j, step;
//	float min, max, data;
//
//	// �ҳ����ֵ����Сֵ
//	min = max = pm25[1][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 12; j++)
//		{
//			if (pm25[i][j])
//			{
//				min = min > pm25[i][j] ? pm25[i][j] : min;
//				max = max < pm25[i][j] ? pm25[i][j] : max;
//			}
//		}
//	}
//
//	// ���㲽��ֵ
//	if ((int)(max - min) > 80)
//	{
//		step = 2;
//	}
//	else
//	{
//		step = 1;
//	}
//
//	printf("��Сֵ: %.2f, ���ֵ: %.2f\n", min, max);
//	// ��ӡֱ��ͼ
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 12; j++)
//		{
//			data = pm25[i][j];
//			if (data)
//			{
//				printf("%d��%2d��: ", i + 2014, j + 1);
//				while (data >= min)
//				{
//					printf("*");
//					data -= step;
//				}
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}