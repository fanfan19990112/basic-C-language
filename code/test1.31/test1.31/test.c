#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//���ļ����ж�ȡ�ַ�������������ַ����ĳ���
//#define NUM 64
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char str[NUM] = { 0 };
//	char* str1 = str;
//	int count = 0;
//	int i = 0;
//	if (pf == NULL)
//	{
//		perror("FILE OPEN FAILURE");
//		return EXIT_FAILURE;
//	}
//
//	while (fgets(str, sizeof str, pf) != NULL)
//		printf("\"%s\"\n", str);
//	for (i = 0; *str1 != '\0'; i++)
//	{
//		count++;
//		str1++;
//	}
//	printf("���ܹ�������%d���ַ�\n",count);
//
//	free(pf);
//	pf = NULL;
//
//	return 0;
//}

//#define NUM 64
//��ȡ�û�������ַ�����Ӣ�ģ�������ָ�뷨�������ַ������ַ�������
//int main()
//{
//	char str1[NUM] ;
//	char* str2 = str1;
//	int count = 0;
//
//	printf("������һ���ַ��� : ");
//
//	while ((*str2++ = getchar()) != '\n')
//		count++;
//
//	printf("���ܹ�������%d���ַ���\n", count);
//
//	return 0;
//}

//#define NUM 64
////����ͳ�������ַ��Լ���Ӣ�Ļ���ַ��ĳ���
//int main()
//{
//	char str[NUM] ;
//	char* target = str;
//	int i = 0;
//	int count = 0;
//	
//	printf("������һ���ַ��� : ");
//	fgets(str, NUM, stdin);
//
//	//�ж�������ַ�Ϊ���Ļ���Ӣ��
//	while (*target != '\n')
//	{
//		if ((int)(*target) < 0)
//		{
//			target += 2;
//			count++;
//		}
//		else
//		{
//			target++;
//			count++;
//		}
//	}
//
//	printf("���ܹ�������%d���ַ�\n", count);
//
//	return 0;
//}

//#define NUM 128
////ʹ�� fgets ������ȡ�û�������ַ�����Ӣ�ģ����洢���ַ����� str1 �У�������ָ�룬�� str1 �е��ַ����������ַ����� str2 �С�
//int main()
//{
//	char str1[NUM];
//	char str2[NUM];
//	char* target1 = str1;
//	char* target2 = str2;
//
//	printf("������һ���ַ�����str1�� ��");
//	fgets(str1, NUM, stdin);
//
//	printf("��ʼ����str1�����ݵ�str2��...\n");
//
//	int sz = sizeof(str1) / sizeof(str1[0]);
//
//	while (sz-- && (*target2++ = *target1++) != '\n')
//		;
//	*target2 = '\0';
//	printf("������ϣ����ڣ�str2�е�������: %s\n", str2);
//
//	return 0;
//}

//#define NUM 64
////ʵ�� strncpy ����
//int main()
//{
//	char str1[NUM] = { '\0' };
//	char str2[NUM] = { '\0' };
//	char* target1 = str1;
//	char* target2 = str2;
//	int n;
//	int i;
//
//	printf("������һ���ַ�����str1�� ��");
//	fgets(str1, NUM, stdin);
//
//	printf("��������Ҫ�������ַ����� : ");
//	scanf("%d", &n);
//
//	printf("��ʼ����str1�����ݵ�str2��...\n");
//
//	while (n--)
//	{
//		if ((int)*target1 < 0)
//		{
//			i = 2;
//			while(i--)
//			*target2++ = *target1++;
//		}
//		else
//		{
//			*target2++ = *target1++;
//		}
//	}
//	*target2 = '\0';
//	printf("������ϣ����ڣ�str2�е�������: %s\n", str2);
//	return 0;
//}

//#define NUM 128
////ʵ�� strncat ����
//int main()
//{
//	char str1[NUM] = { '\0' };
//	char str2[NUM] = { '\0' };
//	char* target1 = str1;
//	char* target2 = str2;
//	int i;
//	int n;
//
//	printf("������һ���ַ�����str1�� ��");
//	fgets(str1, NUM, stdin);
//
//	printf("������һ���ַ�����str2�� ��");
//	fgets(str2, NUM, stdin);
//
//	printf("��������Ҫ���ӵ��ַ��� : ");
//	scanf("%d", &n);
//
//	while ((*target1++) != '\n')
//		;
//	*(--target1) = '\0';
//
//	while (n-- && (*target2 != '\n'))
//	{
//		if ((int)*target2 < 0)
//		{
//			i = 2;
//			while (i--)
//				*target1++ = *target2++;
//		}
//		else
//		{
//			*target1++ = *target2++;
//		}
//	}
//
//	printf("���Ӻ�Ľ���� : %s\n", str1);
//
//	return 0;
//}

//#define MAX 128
////ʵ�� strncmp ����
//int main()
//{
//	char str1[MAX];
//	char str2[MAX];
//
//	char *target1 = str1;
//	char *target2 = str2;
//
//	char ch;
//	int index = 1, n;
//
//	printf("�������һ���ַ�����");
//	fgets(str1, MAX, stdin);
//
//	printf("������ڶ����ַ�����");
//	fgets(str2, MAX, stdin);
//
//	printf("��������Ҫ�Աȵ��ַ�������");
//	scanf("%d", &n);
//
//	while (n && *target1 != '\0' && *target2 != '\0')
//	{
//		ch = *target1;
//		if (ch < 0)
//		{
//			if (*target1++ != *target2++ || *target1++ != *target2++)
//			{
//				break;
//			}
//		}
//		if (*target1++ != *target2++)
//		{
//			break;
//		}
//		index++;
//		n--;
//	}
//
//	if ((n == 0) || (*target1 == '\0' && *target2 == '\0'))
//	{
//		printf("�����ַ�����ǰ %d ���ַ���ȫ��ͬ��\n", index);
//	}
//	else
//	{
//		printf("�����ַ�������ȫ��ͬ���� %d ���ַ����ֲ�ͬ��\n", index);
//	}
//
//	return 0;
//}