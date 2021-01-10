#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char ch;
//	int count = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 65 && ch <= 90)
//			count++;
//	}
//	printf("你总共输入了 %d 个大写字母！\n", count);
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		count++;
//		if (ch == 32)
//			putchar(ch);
//		if (ch >= 65 && ch <= 90)
//		{
//			ch += 32;
//			putchar(ch);
//		}
//		else if (ch >= 97 && ch <= 122)
//		{
//			ch -= 32;
//			putchar(ch);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch;
//	int num = 0;
//	int n = 1, k = 32;
//	const int ret_max = pow(2, sizeof(int) * 8) / 2 - 1;
//	const int ret_min = pow(2, sizeof(int) * 8) / 2 * (-1);
//	printf("请输入待转换的字符串：");
//
//	do
//	{
//		ch = getchar();
//
//		if (ch >= '0' && ch <= '9')
//		{
//			num = 10 * num + (ch - '0');
//		}
//		else
//		{
//			if (num)
//			{
//				break; // 如果已有数字，则退出循环
//			}
//		}
//
//	} while (ch != '\n');
//	if(!num)
//		printf("并未找到任何数值\n");
//	else if (num > ret_max || num  < ret_min)
//		printf("数值超出范围，结果未定义\n");
//	else
//	printf("结果是：%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	double money_fish = 10000;
//	double money_night = 10000;
//	int count = 0;
//	while (money_fish >= money_night)
//	{
//		money_fish = 10000*0.1 + money_fish;
//		money_night *= 1.05;
//		count++;
//	}
//	printf("%d年后，黑夜的投资额超过小甲鱼\n", count);
//	printf("小甲鱼的投资额是:%.3lf\n", money_fish);
//	printf("黑夜的投资额是:%.3lf\n", money_night);
//
//	//money=money*0.05+money    money*=1.05
//
//	return 0;
//}

//int main()
//{
//	double money = 4000000;
//	int count = 0;
//	while (money >= 0)
//	{
//		money = (money-500000)*1.08;
//		count++;
//	}
//	printf("%d 年后,小甲鱼一贫如洗\n",count);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double ret = 1;
//	double sum = 0;
//	double flag = 1.0;
//	while (fabs(ret) >= 1e-8)
//	{
//		ret = flag / i;
//		sum += ret;
//		flag *= -1;
//		i += 2;
//	}
//	printf("%10.7lf\n", sum * 4);
//
//	return 0;
//}

//int main()
//{
//	int sign = 1; // 表示符号
//	double pi = 0.0, n = 1, term = 1.0; // n表示分母，term表示当前项的值
//
//	while (fabs(term) >= 1e-8) // 1e-8表示10^(-8)
//	{
//		pi = pi + term;
//		n = n + 2;
//		sign = -sign;
//		term = sign / n;
//	}
//
//	pi = pi * 4;
//	printf("pi = %10.7f\n", pi);
//
//	return 0;
//}