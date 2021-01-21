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

//通讯录类型
typedef struct Contact
{
	peoInfo *data;//存放1000个信息
	int size;//记录当前已有的元素个数
	int capacity;//记录当前容量
}Contact;
//初始化
void InitContact(Contact* ps);
//添加
void AddContact(Contact* ps);
//打印
void ShowContact(const Contact* ps);
//删除
void delContact(Contact* ps);
//查找
void searchContact(const Contact* ps);
//修改
void modifyContact(Contact* ps);
//排序
void sortContact(Contact* ps);
//销毁通讯录，释放内存
void DestroyContact(Contact* ps);