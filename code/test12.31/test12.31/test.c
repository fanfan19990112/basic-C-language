#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <string.h>

//int check()
//{
//	int a = 1;
//	return (char *)&a;
//}
//
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//signed char b = -1;
//	//unsigned char c = -1;//整型提升
//	//printf("%d %d %d\n", a, b, c);
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	unsigned int i = 0;
//	
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//
//	return 0;
//}

//int main()
//{
//	float n;
//	float* p = &n;
//	*p = 9.0;
//	printf("%f\n", n);
//	//41 10 00 00
//	//01000001 00010000 00000000 00000000 
//	return 0;
//}
//void test(int arr[3][5], int x, int y)
//{
//	int(*p)[5] = arr;
//	int i = 00;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(p[i] + j); 
//			//printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] = arr;
//	int i;
//	//test(arr, 3, 5);
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](6, 3));
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* scr);
//char*(*pf)(char*, const char*) = my_strcpy;
//char*(*pfarr[4])(char*, const char*);

//void menu()
//{
//	printf("********1.Add     2.Sub********\n");
//	printf("********3.Mul     4.Div********\n");
//	printf("********5.Xor     0.exit********\n");
//
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x, y;
//	printf("请输入操作数:> ");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x,y));//回调函数
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 5:
//			calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}

//或者

//int main()
//{	int input = 0;
//	int x, y;
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//函数指针数组作为转移表
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入操作数:> ");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//			printf("输入错误\n");
//	} while (input);
//
//	return 0;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}

//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_struct(const void* e1, const void* e2)
//{
//	//return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//
//}
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%s\n", s[i].name);
//		printf("%d\n", s[i].age);
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}