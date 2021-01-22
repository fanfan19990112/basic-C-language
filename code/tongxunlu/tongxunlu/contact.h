#pragma once

#define Default_sz 3
#define max_name 20
#define max_sex 5
#define max_tel 12
#define max_addr 30

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Option
{
	Exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
typedef struct peoInfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tel[max_tel];
	char addr[max_addr];
}peoInfo;

//ͨѶ¼����
typedef struct Contact
{
	peoInfo *data;//���1000����Ϣ
	int size;//��¼��ǰ���е�Ԫ�ظ���
	int capacity;//��¼��ǰ����
}Contact;
//��ʼ��
void InitContact(Contact* ps);
//���
void AddContact(Contact* ps);
//��ӡ
void ShowContact(const Contact* ps);
//ɾ��
void delContact(Contact* ps);
//����
void searchContact(const Contact* ps);
//�޸�
void modifyContact(Contact* ps);
//����
void sortContact(Contact* ps);
//����ͨѶ¼���ͷ��ڴ�
void DestroyContact(Contact* ps);