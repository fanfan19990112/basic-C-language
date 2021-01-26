#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//extern int Add(int x, int y);

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int ret[9] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 9; i++)
//		ret[i] = Add(arr[i], arr[i + 1]);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	printf("\n");
//	printf("%s\n",__FILE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __LINE__);
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//宏的参数有副作用，并不是计算后带入宏的，而是直接替换，会导致参数变化，所以使用宏时不要带入参数计算
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int*p = MALLOC(10, int);
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("err:");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	printf("\n");
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//条件编译
//#define DEBUG//如果此处定义了DEBUG 那么printf("%d ", arr[i]);就会执行命令；如果没有，就不执行printf("%d ", arr[i]);
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	printf("\n");
//
//	return 0;

//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("huohuo\n");
//#endif
//
//	return 0;
//}

//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
////将0强制转换成结构体类型，则其中的成员变量地址就是各自的偏移量
//struct S
//{
//	char name;
//	int a;
//	char addr;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, name));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, addr));
//
//	return 0;
//}