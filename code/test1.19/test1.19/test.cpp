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

////λ�� λ -> ������λ
//struct a
//{
//	int a : 2;//ð�ź�������ֱ�ʾaֻ��Ҫ2��byte
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////�ܹ���Ҫ47��byteλ��ֻ��Ҫ6���ֽڣ�6 * 8��
////���ȫ�����ͣ��������Ϳ��ٿռ䣬�ȿ���4���ֽڣ���a��b��c�����ֻʣ17��byte����Ϊ�Ų���d
////ֱ�Ӱ�ʣ���15��byte�˷ѵ����ٿ���һ��4�ֽڵĿռ�������d
////��������ִ���32byte
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

//ö��

//enum Sex//�ɸ�ö�ٳ�����ʼ��,��MALE = 2;
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	enum Sex s = FEMALE;//ֻ���������������е�ö�ٳ���
//	return 0;
//}

//����(������)-- ����ͬһ��ռ�

//union  Un
//{
//	char c;
//	int i;
//};//c��i����ͬʱʹ�ã���Ϊ����һ���ռ�
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
//		printf("С��\n");
//	else
//		printf("���\n");
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
//		printf("С��\n");
//
//	return 0;
//}

//union Un
//{
//	int a;//4 8 4 ->������:4
//	char arr[5];//5 1 8 ->������:1
//};//�����������������Ϊ 4
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}