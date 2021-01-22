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
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(Contact* ps)
{
	if (ps->size == ps->capacity)
		Checkcapacity(ps);
		printf("����������:> ");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:> ");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�:> ");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:> ");
		scanf("%s", ps->data[ps->size].tel);
		printf("������סַ:> ");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(const Contact* ps)
{
	if (!ps->size)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ"); 
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
	printf("������Ҫɾ��������:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("����ϵ�˲����ڣ�����������\n");
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void searchContact(const Contact* ps)
{
	char name[max_name];
	printf("������Ҫ���ҵ�����:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("����ϵ�˲����ڣ�����������\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ�����:> ");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (!(ret + 1))
		printf("����ϵ�˲����ڣ�����������\n");
	else
	{
		printf("����������:> ");
		scanf("%s", ps->data[ret].name);
		printf("����������:> ");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�:> ");
		scanf("%s", ps->data[ret].sex);
		printf("������绰:> ");
		scanf("%s", ps->data[ret].tel);
		printf("������סַ:> ");
		scanf("%s", ps->data[ret].addr);
		printf("�޸ĳɹ�\n");
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