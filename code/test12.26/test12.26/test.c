#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//void order(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			else
//				break;
//		}
//	}
//}

//void print(int arr[10], int sz)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}

//void reverse(int arr[10])
//{
//	int i = 9;
//	for (i = 9; i >= 5; i--)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[9 - i];
//		arr[9 - i] = tmp;
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	order(arr, sz);
//	print(arr, sz);
//	reverse(arr);
//	print(arr,sz);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		printf(">\n");
//
//	return 0;
//}

//int main()
//{
//	int a, i, count = 1;
//	printf("Input i:> \n");
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if (!((((a >> i) & 1) == 1) && (count++)))
//			break;
//	}
//	printf("%d\n", count - 1);
//
//	return 0;
//}
//int count_one_bits(int value)
//{
//	int count = 0;
//	while (value)
//	{
//		count++;
//		value = value&(value - 1);
//	}
//	return count;
//}

//int main()
//{
//	int value;
//	int count = 0;
//	scanf("%d", &value);
//	count = count_one_bits(value);
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int m, n, q, i;
//	int count = 0;
//	printf("Input m、n:> ");
//	scanf("%d %d", &m, &n);
//	q = m^n;
	/*while(q)
	{
		q = q&(q - 1);
		count++;
	}*/
	/*for (i = 0; i < 32; i++)
	{
		q = q >> i;
		if ((q & 1 == 1))
			count++;
		else if (q == 0)
			break;
	}
	printf("%d\n", count);
}*/
//int main()
//{
//	int m, i;
//	printf("Input m:> ");
//	scanf("%d", &m);
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i, j;
//	printf("Input n:> ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char *arr)
//{
//	int tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + num % 10;
//	else
//		return num;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}

//double Mul(int n,int k)
//{
//	if (k > 0)
//	{
//		return Mul(n, k - 1)*n;
//	}
//	else if (k < 0)
//		return (1.0 / Mul(n, -k));
//	else if (k == 0)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	double ret = Mul(n, k);
//	printf("%.3lf\n", ret);
//
//	return 0;
//}
