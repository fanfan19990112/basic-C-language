#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void sort(char* e1,char* e2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//int cmp_int(char* e1,char*e2)
//{
//	return *e1 - *e2;
//}
//
//void bubble_sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//				sort((char*)base + j*width, (char*)base + (j + 1)*width, width);
//		}
//	}
//
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//
//int cmp_struct_age(const void* e1, const void*e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",29},{"lisi",27},{"wangwu",24} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%s\n", s[i].name);
//		printf("%d\n", s[i].age);
//	}
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("% d,%d \n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0;
//	double sn = 0, ret = 0;
//	for (; i <= 4; i++)
//	{
//		sn += a*pow(10, i);
//		ret += sn;
//	}
//	printf("%.3lf\n",ret);
//
//	return 0;
//}

//#include <string.h>
//
//void test(char* arr,int sz)
//{
//	int i;
//	for (i = 0; i <= (sz / 2 - 1); i++)
//	{
//		int tmp = arr[sz - i - 1];
//		arr[sz - i - 1] = arr[i];
//		arr[i] = tmp;
//	}
//		printf("%s\n", arr);
//
//}
//
//int main()	
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) - 1;
//	test(arr, sz);
//
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp /= 10)
//			n++;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 6;
//	int n = 1;
//	int tmp;
//	int j;
//	while (n < 14)
//	{
//		tmp = i;
//		for (; tmp > 0; tmp--)
//			printf(" ");
//		i -= 1;
//		j = 0;
//		for (; j < n; j++)
//			printf("*");
//		n += 2;
//		printf("\n");
//	}
//	i = 1;
//	n = 11;
//	while (n > 0)
//	{
//		if (i <= 6)
//		{
//			tmp = 1;
//			for (; tmp <= i; tmp++)
//				printf(" ");
//			i += 1;
//		}
//		for (j = n; j > 0; j--)
//			printf("*");
//		n -= 2;
//		printf("\n");
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int line;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int empty = 0;
//	int money = 0;
//	int tmp = 0;
//	scanf("%d", &money);
//	empty = money;
//	tmp = empty;
//	while (empty > 1)
//	{
//		tmp += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", tmp);
//	
//	return 0;
//}

//void move(int* arr, int sz)
//{
//	int *left = &arr[0];//ÕÒÅ¼Êý
//	int *right = &arr[sz-1];//ÕÒÆæÊý
//	while (*left < *right)
//	{
//		while ((*left < *right) && *left % 2 == 1)
//		{
//			left++;
//		}
//		while ((*left < *right) && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (*left < *right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//
//void print(int * arr, int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}