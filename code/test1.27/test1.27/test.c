#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//��10000���������ĸ���
//int main()//����1
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			count++;
//	}
//	printf("10000���ڹ���%d������\n", count);
//	
//	return 0;
//}

//����2
//int main()
//{
//	int count = 4; // ��֪2,3,5,7������
//	int i, j, k;
//	_Bool flag = 1;
//
//	for (i = 9; i < 10000; i++)
//	{
//		k = (int)sqrt((double)i);
//
//		for (j = 2; j <= k; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag)
//		{
//			count++;
//		}
//		else
//		{
//			flag = 1;
//		}
//	}
//
//	printf("10000���ڹ���%d��������\n", count);
//
//	return 0;
//}


//�������ܳ���
//
//int main()
//{
//	int ch;
//
//	printf("���������ģ�");
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar('a' +'e'+ (ch - 'a' + 3) % 26);
//			continue;
//		}
//
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar('A' + (ch - 'A' + 3) % 26);
//			continue;
//		}
//
//		putchar(ch);
//	}
//
//	putchar('\n');
//
//	return 0;
//}

//int main()
//{
//	double flag = 1.0;
//	double sum = 0;
//	int i = 0;
//	for (i = 1; ; i+=2)
//	{
//		sum += flag / i;
//		flag *= (-1);
//		if (fabs((flag / i)) < (1.0/ pow(10, 8)))
//			break;
//	}
//	printf("%.7lf\n", 4 * sum);
//
//	return 0;
//}


//�Ʋ���������
//int fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long ret = fib(n);
//	printf("%d���º��ܹ���%ldֻ���ӣ�\n", n, ret);
//
//	return 0;
//}

//�û�������ݣ���ӡ����ÿ���µ�����
//int main()
//{
//	int year = 0;
//	printf("������һ�����:");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("1�·ݣ�31��\n 2�·ݣ�29��\n 3�·�:31��\n 4�·�:30��\n 5�·�: 31��\n 6�·�:30��\n 7�·�:31��\n\
// 8�·�: 31��\n 9�·�: 30��\n 10�·�: 31��\n 11�·�: 30��\n 12�·�: 31��\n");
//	}
//	else
//	{
//		printf("1�·ݣ�31��\n 2�·ݣ�28��\n 3�·�:31��\n 4�·�:30��\n 5�·�: 31��\n 6�·�:30��\n 7�·�:31��\n\
// 8�·�: 31��\n 9�·�: 30��\n 10�·�: 31��\n 11�·�: 30��\n 12�·�: 31��\n");
//	}
//	
//	return 0;
//}

//дһ��������������Ҫ���û��������գ���ʾ������������ϻ��˶����죿
//int main()
//{
//	long count = 0;//����ܹ����˶�����
//	int year1, year2;
//	int month1, month2;
//	int day1, day2;
//	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	printf("������������գ���1988-05-20����");
//	scanf("%d-%d-%d", &year1, &month1, &day1);
//
//	printf("������������ڣ���2016-03-28����");
//	scanf("%d-%d-%d", &year2, &month2, &day2);
//
//	while (year1 <= year2)
//	{
//		days[1] = ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)) ? 29 : 28;
//		while (month1 <= 12)
//		{
//			while (day1 <= days[month1 - 1])
//			{
//				if (year1 == year2 && month1 == month2 && day1 == day2)
//				{
//					goto FINISH; // �������ѭ���ű�����goto���
//				}
//				count++;
//				day1++;
//			}
//			day1 = 1;
//			month1++;
//		}
//		month1 = 1;
//		year1++;
//	}
//
//FINISH: printf("��������������ܹ�������%d��\n", count);
//	
//	return 0;
//}


//int main()
//{
//	long count1 = 0, count2; // count���ڴ��һ�����˶�����
//	int year1, year2, year3; // year1�����������ݣ�year2�ǽ�������
//	int month1, month2, month3;
//	int day1, day2, day3;
//	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	printf("������������գ���1988-05-20����");
//	scanf("%d-%d-%d", &year1, &month1, &day1);
//
//	printf("�������������ڣ���2016-03-28����");
//	scanf("%d-%d-%d", &year2, &month2, &day2);
//
//	year3 = year1 + 80;
//	month3 = month1;
//	day3 = day1;
//
//	while (1)
//	{
//		days[1] = (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) ? 29 : 28;
//		while (month1 <= 12)
//		{
//			while (day1 <= days[month1 - 1])
//			{
//				if (year1 == year2 && month1 == month2 && day1 == day2)
//				{
//					count2 = count1;
//					printf("��������������ܹ�������%d��\n", count2);
//				}
//
//				if (year1 == year3 && month1 == month3 && day1 == day3)
//				{
//					printf("����ܻ80�꣬�㻹ʣ��%d��\n", count1 - count2);
//					printf("���Ѿ�ʹ����%.2f\%����������ú���ϧʣ�µ�ʱ�䣡\n", (double)count2 / count1 * 100);
//					goto FINISH;
//				}
//
//				day1++;
//				count1++;
//			}
//			day1 = 1;
//			month1++;
//		}
//		month1 = 1;
//		year1++;
//	}
//
//FINISH: return 0;
//}