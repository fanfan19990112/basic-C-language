#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//struct S5
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s5));
//
//	return 0;
//}

//#include <stddef.h>
////#pragma pack(1)
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S4, d));
//
//	return 0;
//}

////位段 位 -> 二进制位
//struct a
//{
//	int a : 2;//冒号后面的数字表示a只需要2个byte
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////总共需要47个byte位，只需要6个字节（6 * 8）
////如果全是整型，则按照整型开辟空间，先开辟4个字节，把a、b、c放完后，只剩17个byte，因为放不下d
////直接把剩余的15个byte浪费掉，再开辟一个4字节的空间拿来放d
////后面的数字大于32byte
//int main()
//{
//	struct a A;
//	printf("%d\n", sizeof(A));
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//枚举

//enum Sex//可给枚举常量初始化,如MALE = 2;
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	enum Sex s = FEMALE;//只能用中括号中已有的枚举常量
//	return 0;
//}

//联合(共用体)-- 共用同一块空间

//union  Un
//{
//	char c;
//	int i;
//};//c和i不能同时使用，因为共用一个空间
//
//int main()
//{
//	union Un u;
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (1 == *(char *)&a)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int a;
//}u;
//
//int main()
//{
//	u.a = 1;
//	if (1 == u.c)
//		printf("小端\n");
//
//	return 0;
//}

//union Un
//{
//	int a;//4 8 4 ->对齐数:4
//	char arr[5];//5 1 8 ->对齐数:1
//};//该联合体的最大对齐数为 4
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}