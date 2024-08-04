#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////const修饰结构体指针形参变量
//struct stu
//{
//	char name[50];
//	int age;
//};
//
//void func1(struct stu* const p)
//{
//	//p = NULL;//error
//	p->age = 10;
//}
//
//void func2(struct stu const* p)
//{
//	p = NULL;
//	//p->age = 20;//error
//}
//
//void func3(const struct stu* p)
//{
//	p = NULL; //ok
//	//p->age = 10; //err
//}
//
//void func4(const struct stu* const p)
//{
//	//p = NULL; //err
//	//p->age = 10; //err
//}