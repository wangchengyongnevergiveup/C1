#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体指针做函数参数

//struct student
//{
//	int age;
//	char* name;
//	int num;
//};
//
//void init_struct(struct student** p)
//{
//	*p = malloc(sizeof(struct student));
//	if (*p == NULL)
//	{
//		return -1;
//	}
//	(*p)->age = 10;
//	(*p)->name = malloc(sizeof(char) * 10);
//	if ((*p)->name != NULL)
//	{
//		strcpy((*p)->name, "aaa");
//	}
//	(*p)->num = 10;
//}
//
//int main()
//{
//	//1
//	//struct student stu;
//	//stu.age = 10;
//	//stu.name = malloc(sizeof(char) * 10); 
//	//if (stu.name != NULL)
//	//{
//	//	strcpy(stu.name, "aaa");
//	//}
//	//stu.num = 10;
//	//printf("age = %d, name= %s, num= %d\n", stu.age, stu.name, stu.num);//age = 10, name= aaa, num= 10
//	//free(stu.name);
//	//stu.name = NULL;
//
//	//2
//	//struct student* p = NULL;
//	//p = malloc(sizeof(struct student));		// 先申请外层空间
//	//if (p == NULL)
//	//{
//	//	return -1;
//	//}
//	//p->age = 10;
//	//p->name = malloc(sizeof(char) * 10);		// 再申请内层空间
//	//if (p->name != NULL)
//	//{ 
//	//	strcpy(p->name, "aaa");
//	//}
//	//p->num = 10;
//	//printf("age = %d, name=%s, num = %d\n", p->age, p->name, p->num);//age = 10, name=aaa, num = 10
//	//free(p->name);  // 先释放内层
//	//free(p);
//
//	//3
//	struct student* p = NULL;
//	init_struct(&p);
//	printf("age = %d, name=%s, num = %d\n", p->age, p->name, p->num);//age = 10, name=aaa, num = 10
//	free(p->name);  // 先释放内层
//	free(p);		// 再释放外层
//
//	return 0;
//}