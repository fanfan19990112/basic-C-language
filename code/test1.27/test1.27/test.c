#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//求10000以内素数的个数
//int main()//方法1
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
//	printf("10000以内共有%d个素数\n", count);
//	
//	return 0;
//}

//方法2
//int main()
//{
//	int count = 4; // 已知2,3,5,7是素数
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
//	printf("10000以内共有%d个素数！\n", count);
//
//	return 0;
//}


//凯撒加密程序
//
//int main()
//{
//	int ch;
//
//	printf("请输入明文：");
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


//菲波那切数列
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
//	printf("%d个月后，总共有%ld只兔子！\n", n, ret);
//
//	return 0;
//}

//用户输入年份，打印该年每个月的天数
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("1月份：31天\n 2月份：29天\n 3月份:31天\n 4月份:30天\n 5月份: 31天\n 6月份:30天\n 7月份:31天\n\
// 8月份: 31天\n 9月份: 30天\n 10月份: 31天\n 11月份: 30天\n 12月份: 31天\n");
//	}
//	else
//	{
//		printf("1月份：31天\n 2月份：28天\n 3月份:31天\n 4月份:30天\n 5月份: 31天\n 6月份:30天\n 7月份:31天\n\
// 8月份: 31天\n 9月份: 30天\n 10月份: 31天\n 11月份: 30天\n 12月份: 31天\n");
//	}
//	
//	return 0;
//}

//写一个生命计算器，要求用户输入生日，显示他在这个世界上活了多少天？
//int main()
//{
//	long count = 0;//存放总共活了多少天
//	int year1, year2;
//	int month1, month2;
//	int day1, day2;
//	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	printf("请输入你的生日（如1988-05-20）：");
//	scanf("%d-%d-%d", &year1, &month1, &day1);
//
//	printf("请输入今年日期（如2016-03-28）：");
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
//					goto FINISH; // 跳出多层循环才被迫用goto语句
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
//FINISH: printf("你在这个世界上总共生存了%d天\n", count);
//	
//	return 0;
//}


//int main()
//{
//	long count1 = 0, count2; // count用于存放一共活了多少天
//	int year1, year2, year3; // year1是你的生日年份，year2是今天的年份
//	int month1, month2, month3;
//	int day1, day2, day3;
//	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	printf("请输入你的生日（如1988-05-20）：");
//	scanf("%d-%d-%d", &year1, &month1, &day1);
//
//	printf("请输入今天的日期（如2016-03-28）：");
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
//					printf("你在这个世界上总共生存了%d天\n", count2);
//				}
//
//				if (year1 == year3 && month1 == month3 && day1 == day3)
//				{
//					printf("如果能活到80岁，你还剩下%d天\n", count1 - count2);
//					printf("你已经使用了%.2f\%的生命，请好好珍惜剩下的时间！\n", (double)count2 / count1 * 100);
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