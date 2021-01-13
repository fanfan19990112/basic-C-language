#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr[11][11] = { 0 };
//	int i;
//	for (i = 0; i < 11; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 11; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a ') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("killer:%c\n", killer);
//	}
//
//	return 0;
//}

//int main()
//{
//	int x = 0, s = 0; while (!x != 0)s += ++x; printf("%d", s);
//	double  x; x = 218.82631;
//	printf("%-6.2e\n", x);
//	int a = 0;
//	int b = (a = -1) ? 2 : 3;
//	int c = (a = 0) ? 2 : 3;
//	printf("%d %d %d\n", a, b, c);
//}

//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int *)malloc(10 * sizeof(int));
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };//5 4 3 2 1
//	int *ptr = (int*)(&a + 1);
//	printf("%d ,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 }; 
//	int *ptrl = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//printf("%d,%d",*(ptrl - 1),*(ptr2 - 1));
//
//return 0;
//}

//#include <string.h>
//#include <assert.h>
//
//void reverse(char*left, char*right) 
//{
//	assert(left != NULL); assert(right != NULL); 
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp; 
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k) //三步翻转法
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//	printf("%s\n", arr);
//}


//void left_move(char* arr, int k)//暴力求解法
//{
//	assert(arr);
//	int i;
//	int sz = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		int j;
//		int tmp = *arr;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//	printf("%s\n", arr);
//
//}

//int main()
//{
//	char arr[10] = { "0" };
//	gets_s(arr, 10);
//	int k;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	return 0;
//}

//#include <string.h>
//#include <stdlib.h>
//
//int is_left_move(char* arr1, char* arr2)
//{
//		int len1 = strlen(arr1);
//		int len2 = strlen(arr2);
//		if (len1 != len2)
//			return 0;
//		char* ret = strstr(arr1, arr2);
//		if (ret != NULL)
//			return 1;
//		else	
//			return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "cdefab";
//	strncat(arr1, arr1, 6);
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int* row, int* col) 
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x <= *row - 1 && y >= 0) 
//	{
//		if (arr[x][y] >k)
//		{
//			y--;
//		}
//		else if (arr[x][y] <k) 
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);//返回型参数
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("%d %d \n", x, y);
//	}
//	else
//		printf("找不到\n");
//
//	return 0;
//}