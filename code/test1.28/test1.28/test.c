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
//                printf("�ַ���%s���ַ���%s�̣�\n", str1, str2);
//        }
//        else
//        {
//                printf("�ַ���%s���ַ���%s����\n", str1, str2);
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
//	printf("�������һ���ַ��� : ");
//	while ((ch1[i++] = getchar()) != '\n')
//		;
//
//	i = 0;
//	printf("������ڶ����ַ��� : ");
//	while ((ch2[i++] = getchar()) != '\n')
//		;
//
//	printf("������Ƚϵ��ַ��� : ");
//	scanf("%d", &n);
//
//	ret = my_strncmp(ch1, ch2, n);
//
//	printf("�ȽϵĽ�� ��%d\n", ret);
//
//	return 0;
//}

//#define MAX 1024
//
//int main()
//{
//	char ch[MAX] = { 0 };
//	int i = 0;
//	printf("������һ���ı� : ");
//	while ((ch[i++] = getchar()) != '\n')
//		;
//	if (strlen(ch) <= 20)
//		printf("��������ı��� : %s\n", ch); 
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
//	printf("������Ӣ���ı���");
//
//	while ((ch = getchar()) != '\n')
//	{
//		ascii[ch]++; // �ַ���Ӧ��ASCII���1
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
//	printf("���ܹ�������%d���ַ������в�ͬ���ַ�������%d����\n", input_num, strlen(count));
//	printf("�����ǣ�%s\n", count);
//	printf("���ִ��������ַ���\'%c\'�����ܹ�������%d�Ρ�\n", max, ascii[max]);
//
//	return 0;
//}
