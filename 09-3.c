#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//½á¹¹ÌåÇ¶Ì×
//struct person
//{
//	int age;
//	char name[10];
//};
//
//struct student
//{
//	struct person man;
//	int score;
//};
//
//int main()
//{
//	struct student stu = { 10,"aaa",60 };
//	printf("age = %d\n", stu.man.age);//10
//	printf("age = %d\n", (&stu)->man.age);//10
//
//	struct student* p = &stu;
//	(*p).man.age = 20;
//	strcpy((p->man).name, "bbb");
//	printf("age = %d\n", (*p).man.age);//20
//	printf("name = %s\n", (&(p->man))->name);//bbb
//
//	return 0;
//}