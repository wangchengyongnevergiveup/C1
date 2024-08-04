#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体数组名做函数参数

//struct student
//{
//	int age;
//	char* name;  
//	int num;
//};
//
//void print_arr(struct student* stu, int n)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		printf("age = %d ", stu[i].age);
//		printf("name = %s ", stu[i].name);
//		printf("num = %d\n", stu[i].num);
//	}
//}
//
//int main()
//{
//	struct student stu[5];
//	int n = sizeof(stu) / sizeof(stu[0]);
//	for (size_t i = 0; i < n; i++)
//	{
//		stu[i].age = i + 1;
//		stu[i].name = malloc(10);
//		if (stu[i].name != NULL)
//		{
//			strcpy(stu[i].name, "aaa");
//		}
//		stu[i].num = i + 1;
//	}
//	
//	print_arr(stu, n);
//	
//	for (size_t i = 0; i < n; i++)
//	{
//		free(stu[i].name);
//		stu[i].name = NULL;
//	}
//
//	return 0;
//}