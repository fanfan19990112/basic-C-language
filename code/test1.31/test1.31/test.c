#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//从文件当中读取字符串，并计算出字符串的长度
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
//	printf("你总共输入了%d个字符\n",count);
//
//	free(pf);
//	pf = NULL;
//
//	return 0;
//}

//#define NUM 64
//读取用户输入的字符串（英文），并用指针法来计算字符串的字符个数。
//int main()
//{
//	char str1[NUM] ;
//	char* str2 = str1;
//	int count = 0;
//
//	printf("请输入一个字符串 : ");
//
//	while ((*str2++ = getchar()) != '\n')
//		count++;
//
//	printf("你总共输入了%d个字符串\n", count);
//
//	return 0;
//}

//#define NUM 64
////可以统计中文字符以及中英文混合字符的程序
//int main()
//{
//	char str[NUM] ;
//	char* target = str;
//	int i = 0;
//	int count = 0;
//	
//	printf("请输入一个字符串 : ");
//	fgets(str, NUM, stdin);
//
//	//判断输入的字符为中文还是英文
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
//	printf("你总共输入了%d个字符\n", count);
//
//	return 0;
//}

//#define NUM 128
////使用 fgets 函数读取用户输入的字符串（英文）并存储到字符数组 str1 中，并利用指针，将 str1 中的字符串拷贝到字符数组 str2 中。
//int main()
//{
//	char str1[NUM];
//	char str2[NUM];
//	char* target1 = str1;
//	char* target2 = str2;
//
//	printf("请输入一个字符串到str1中 ：");
//	fgets(str1, NUM, stdin);
//
//	printf("开始拷贝str1的内容到str2中...\n");
//
//	int sz = sizeof(str1) / sizeof(str1[0]);
//
//	while (sz-- && (*target2++ = *target1++) != '\n')
//		;
//	*target2 = '\0';
//	printf("拷贝完毕！现在，str2中的内容是: %s\n", str2);
//
//	return 0;
//}

//#define NUM 64
////实现 strncpy 函数
//int main()
//{
//	char str1[NUM] = { '\0' };
//	char str2[NUM] = { '\0' };
//	char* target1 = str1;
//	char* target2 = str2;
//	int n;
//	int i;
//
//	printf("请输入一个字符串到str1中 ：");
//	fgets(str1, NUM, stdin);
//
//	printf("请输入需要拷贝的字符个数 : ");
//	scanf("%d", &n);
//
//	printf("开始拷贝str1的内容到str2中...\n");
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
//	printf("拷贝完毕！现在，str2中的内容是: %s\n", str2);
//	return 0;
//}

//#define NUM 128
////实现 strncat 函数
//int main()
//{
//	char str1[NUM] = { '\0' };
//	char str2[NUM] = { '\0' };
//	char* target1 = str1;
//	char* target2 = str2;
//	int i;
//	int n;
//
//	printf("请输入一个字符串到str1中 ：");
//	fgets(str1, NUM, stdin);
//
//	printf("请输入一个字符串到str2中 ：");
//	fgets(str2, NUM, stdin);
//
//	printf("请输入需要连接的字符数 : ");
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
//	printf("连接后的结果是 : %s\n", str1);
//
//	return 0;
//}

//#define MAX 128
////实现 strncmp 函数
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
//	printf("请输入第一个字符串：");
//	fgets(str1, MAX, stdin);
//
//	printf("请输入第二个字符串：");
//	fgets(str2, MAX, stdin);
//
//	printf("请输入需要对比的字符个数：");
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
//		printf("两个字符串的前 %d 个字符完全相同！\n", index);
//	}
//	else
//	{
//		printf("两个字符串不完全相同，第 %d 个字符出现不同！\n", index);
//	}
//
//	return 0;
//}