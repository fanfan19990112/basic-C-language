#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("***************************************\n");
	printf("*****1.add                2.del   *****\n");
	printf("*****3.search             4.modify*****\n");
	printf("*****5.show               6.sort  *****\n");
	printf("***************0.exit******************\n");
	printf("***************************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//�������1000��Ԫ�غ�size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			delContact(&con);
			break;
		case search:
			searchContact(&con);
			break;
		case modify:
			modifyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			sortContact(&con);
			break;
		case Exit:
			DestroyContact(&con);
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}