#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* ps)
{
	ps->data = (peoInfo*)malloc(3 * sizeof(peoInfo));
	if (ps->data == NULL)
		return;
	ps->size = 0;
	ps->capacity = Default_sz;
}

void Checkcapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		peoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(peoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(Contact* ps)
{
	if (ps->size == ps->capacity)
		Checkcapacity(ps);
		printf("请输入名字:> ");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:> ");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别:> ");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:> ");
		scanf("%s", ps->data[ps->size].tel);
		printf("请输入住址:> ");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
}

void ShowContact(const Contact* ps)
{
	if (!ps->size)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址"); 
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex, 
				ps->data[i].tel, 
				ps->data[i].addr);
		}

	}
}

static int Findbyname(const Contact*ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void delContact(Contact* ps)
{
	char name[max_name];
	printf("请输入要删除的名字:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("该联系人不存在，请重新输入\n");
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void searchContact(const Contact* ps)
{
	char name[max_name];
	printf("请输入要查找的名字:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("该联系人不存在，请重新输入\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tel,
			ps->data[ret].addr);
	}
}

void modifyContact(Contact* ps)
{
	char name[max_name];
	printf("请输入要修改的名字:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("该联系人不存在，请重新输入\n");
	else
	{
		printf("请输入名字:> ");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄:> ");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别:> ");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话:> ");
		scanf("%s", ps->data[ret].tel);
		printf("请输入住址:> ");
		scanf("%s", ps->data[ret].addr);
		printf("修改成功\n");
	}
}

void sortContact(Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1; j++)
		{
			if ((ps->data[j].age - ps->data[j + 1].age)>0)
			{
				ps->data[ps->size] =ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = ps->data[ps->size];
			}
		}
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}