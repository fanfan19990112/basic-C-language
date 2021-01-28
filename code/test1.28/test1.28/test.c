#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char str1[100] = "Original";
//	char str2[10] = "New";
//
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}

//int main()
//{
//	char str[10] = { 0 };
//
//	strncat(str, "I love FishC.com!", sizeof(str) - 1);
//	printf("%s\n", str);
//
//	return 0;
//}

//int main()
//{
//        char str1[] = "love";
//        char str2[] = "FishC";
//
//        if ((int)(strlen(str1) - strlen(str2)) < 0)
//        {
//                printf("字符串%s比字符串%s短！\n", str1, str2);
//        }
//        else
//        {
//                printf("字符串%s比字符串%s长！\n", str1, str2);
//        }
//
//        return 0;
//}

//#define MAX 1024
//int my_strncmp( char* ch1, char* ch2, int n)
//{
//	int ret = 0;
//	int tmp = 0;
//	while (n--)
//	{
//		ret = ret + (*ch1 - '0');
//		ch1++;
//		tmp = tmp + (*ch2 - '0');
//		ch2++;
//	}
//	return ret - tmp;
//}
//
//int main()
//  {
//	char ch1[MAX] = { "0" };
//	char ch2[MAX] = { "0" };
//	size_t n = 0;
//	int ret = 0;
//	int i = 0;
//	printf("请输入第一个字符串 : ");
//	while ((ch1[i++] = getchar()) != '\n')
//		;
//
//	i = 0;
//	printf("请输入第二个字符串 : ");
//	while ((ch2[i++] = getchar()) != '\n')
//		;
//
//	printf("请输入比较的字符数 : ");
//	scanf("%d", &n);
//
//	ret = my_strncmp(ch1, ch2, n);
//
//	printf("比较的结果 ：%d\n", ret);
//
//	return 0;
//}

//#define MAX 1024
//
//int main()
//{
//	char ch[MAX] = { 0 };
//	int i = 0;
//	printf("请输入一行文本 : ");
//	while ((ch[i++] = getchar()) != '\n')
//		;
//	if (strlen(ch) <= 20)
//		printf("你输入的文本是 : %s\n", ch); 
//	else
//	{
//		for (i = 0; i < 20; i++)
//		{
//			if (ch[i] == ' ')
//			{
//				for (i = 20; i > 0; i--)
//				{
//					if (ch[i] = ' ')
//						ch[i - 1] = '\0';
//					goto FINESH;
//				}
//					
//			}
//		}
//		ch[20] = '\0';
//	}
//
//FINESH:printf("%s\n", ch);
//
//	return 0;
//}

//#define NUM 128
//
//int main()
//{
//	int ch, i, j = 0, max = 0;
//	int input_num = 0;
//	int ascii[NUM] = { 0 };
//	char count[NUM] = "";
//
//	printf("请输入英文文本：");
//
//	while ((ch = getchar()) != '\n')
//	{
//		ascii[ch]++; // 字符对应的ASCII码加1
//		input_num++;
//	}
//
//	for (i = 0; i < NUM; i++)
//	{
//		if (ascii[i])
//		{
//			count[j++] = i;
//			if (ascii[i] > ascii[max])
//			{
//				max = i;
//			}
//		}
//	}
//
//	printf("你总共输入了%d个字符，其中不同的字符个数有%d个。\n", input_num, strlen(count));
//	printf("它们是：%s\n", count);
//	printf("出现次数最多的字符是\'%c\'，它总共出现了%d次。\n", max, ascii[max]);
//
//	return 0;
//}
