#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ڴ�����10���ֽ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//		printf("\n");
//	}
//	//����̬�ڴ治��ʹ��ʱ��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	return 0;
//}


//realloc -> ������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//    //�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵĿռ�
//	//ע������:
//	//1�����pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2�����pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򿪱�һ����������Ŀռ�
//	//   ���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//   ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3������һ���µı���������realloc�����ķ���ֵ
//
//	int * ptr = realloc(p, 40);
//	if (ptr != NULL)
//		p = ptr;
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	printf("\n");
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}

//char *GetMemory(void) 
//{
//	char p[] = "hello world"; 
//	return p;
//}
//void Test(void) 
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main() 
//{
//	Test();
//	return 0;
//}
//ջ�ռ�����

//void  GetMemory(char **p, int num) 
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str,100); 
//	strcpy(str, "hello\n"); 
//	printf(str);//û���ͷŶ�̬�����ڴ棬�����ڴ�й¶������
//}
//int main()
//{
//	Test();
//	return 0;
//}
//�������� -- �ṹ�����һ��Ԫ�صĴ�С������δ֪��

//struct S
//{
//	int n;
//	int a[];//δ֪��С�� - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};

//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	struct S* ps = malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		ps->a[i] = i;
//	struct S *ptr = realloc(ps, 44);
//	if (ptr != NULL)
//		ps = ptr;
//	for (i = 5; i < 10; i++)
//		ps->a[i] = i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", ps->a[i]);
//	printf("\n");
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n; int* arr;
//};
//int main() 
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)); 
//	ps->arr = malloc(5 * sizeof(int));//ָ��һ����̬�����ڴ�ռ�
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S *ptr = realloc(ps, 10*sizeof(int));
//	if (ptr != NULL)
//		ps = ptr;
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
