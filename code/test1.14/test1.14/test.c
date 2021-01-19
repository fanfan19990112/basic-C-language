#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int my_strcmp(char *arr1, char *arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)
//		return 1;
//	else
//		return -1;
//
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	int ret;
//	printf("ret = %d\n", ret = my_strcmp(arr1, arr2));
//
//	return 0;
//}
//char* my_strcmp(char *arr1, char *arr2, int k)
//{
//	char* ret = arr1;
//	while (k--)
//		*arr1++ = *arr2++;
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "cba";
//	int k = 3;
//	char *ret;
//	printf("%s\n", ret = my_strcmp(arr1, arr2, k));
//	return 0;
//}

//char *my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char *p1 = NULL;
//	char *p2 = NULL;
//	char *cur = (char*)str1;
//	if (!*str2)
//	{
//		return (char*)str1;
//	}
//	while (*cur)
//	{
//		p1 = cur;
//		p2 = (char*)str2;
//		while (*p1 && *p2 && !(*p1 - *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//			return cur;
//		if (!*p1)
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char *arr1 = "abbbc";
//	char *arr2 = "bbc";
//	char *ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("’“≤ªµΩ\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i;
//	for (i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//
//	return 0;
//}

//void *my_memmove(void *dest, const void *src, size_t count)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	my_memmove(arr,  arr + 2, 20);
//		for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//			printf("%d ", arr[i]);
//		printf("\n");
//
//	return 0;
//}