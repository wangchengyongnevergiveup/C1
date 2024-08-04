#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体与指针
//struct stu
//{
//	int age;
//	char name[10];
//};
//
//struct person
//{
//	char* name;
//	int age;
//};
//
//int main()
//{
	//struct stu* p = NULL;
	//p = (struct stu*)malloc(sizeof(struct stu));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//p->age = 10;
	//strcpy(p->name, "aaa");
	//printf("age =%d name =%s\n", (*p).age, (*p).name);//age =10 name =aaa
	//free(p);
	//p = NULL;

//	struct person* p = NULL;
//	p = (struct stu*)malloc(sizeof(struct  stu));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	p->name = malloc(strlen("test") + 1);
//	if (p->name == NULL)
//	{
//		return 0;
//	}
//	strcpy(p->name, "test");
//	p->age = 22;
//	printf("age =%d name =%s\n", (*p).age, (*p).name);//age =22 name =test
//	free(p->name);
//	p->name = NULL;
//	free(p);
//	p = NULL;
//
//	return 0;
//}