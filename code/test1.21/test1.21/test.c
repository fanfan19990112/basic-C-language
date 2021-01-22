#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//向内存申请10个字节
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//		printf("\n");
//	}
//	//当动态内存不再使用时，应该还给操作系统
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


//realloc -> 调整动态开辟内存空间的大小
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
//	//就是在使用malloc开辟的20个字节空间
//    //假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的空间
//	//注意事项:
//	//1．如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2．如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域开辟一块满足需求的空间
//	//   并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//   最后返回新开辟的内存空间地址
//	//3．得用一个新的变量来接受realloc函数的返回值
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
//栈空间问题

//void  GetMemory(char **p, int num) 
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str,100); 
//	strcpy(str, "hello\n"); 
//	printf(str);//没有释放动态开辟内存，存在内存泄露的问题
//}
//int main()
//{
//	Test();
//	return 0;
//}
//柔性数组 -- 结构中最后一个元素的大小可以是未知的

//struct S
//{
//	int n;
//	int a[];//未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
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
//	ps->arr = malloc(5 * sizeof(int));//指向一个动态开辟内存空间
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
