#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//typedef struct stu
//{
//	char name[20];
//	int age;
//	char sex[20];
//}stu;
//
//void print1(stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//}
//
//void print2(stu* ps)
//{
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	printf("%s\n",ps->sex);
//}
//int main()
//{
//	stu s = { "����",20,"��" };
//	print1(s);
//	printf("\n");
//	print2(&s);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//const��ָ�������*���ʱ�����ε���*p������ͨ��pȥ�ı�*p��ֵ;
//const��ָ�����*���ұ�ʱ�����ε���ָ�����p�����ܸı�ָ�����p��ֵ

//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������dest�У�����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "fishc";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}