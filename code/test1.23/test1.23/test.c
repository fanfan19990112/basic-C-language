#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//文件操作


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb");
//	fwrite(&a,4,1,pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w"); 
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("I love fishc\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[15] = { 0 };
//	FILE* pf = fopen("test.txt", "r"); 
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 15, pf);
//	printf("%s", buf);
//	fgets(buf, 15, pf);
//	printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//输入格式化形式到文件
//struct S
//{
//	int n;
//	char arr[20];
//	double i;
//};
//
//int main()
//{
//	struct S s = { 100,"hello world",3.14 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%d\n%s\n%lf\n", s.n, s.arr, s.i);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	char arr[20];
//	double i;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(pf, "%d %s %lf", &(s.n), s.arr, &(s.i));
//	printf("%d %s %lf\n", s.n, s.arr, s.i);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	char arr[20];
//	double i;
//};
//
//int main()
//{
//	struct S s = { 100,"hello world",3.14 };
//	struct S p = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %s %.2lf", s.n, s.arr, s.i);
//	sscanf(buf, "%d %s %lf", &(p.n), p.arr, &(p.i));
//	printf("%d %s %.2lf\n", s.n, s.arr, s.i);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};

//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int r1 = fwrite(&s, sizeof(s), 1, pf);
//	printf("wrote %d elements out of %d requested\n", r1, 1);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//
//}

//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}	
//	int ret = fread(&tmp, sizeof(struct S), 1, pf);
//	printf("read %d elements out of %d requested\n", ret, 1);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		perror("FILE OPEN FAILURE");
//		return EXIT_FAILURE;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}