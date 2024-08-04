#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体定义和使用
//struct student
//{
//	int age;
//	char name[10];
//	int num;
//}stu1,stu2;

//struct 
//{
//	int age;
//	char name[10];
//	int num;
//}stu1, * stu2, stu = { 100,"aaa",666 };
//
//int main()
//{
//	/*struct student stu = { 18,"afei",1 };
//	stu1.age = 17;
//	strcpy(stu1.name, "ahai");
//	stu1.num = 2;
//	printf("age =%d name =%s num =%d\n", stu.age, stu.name, stu.num);
//	printf("age =%d name =%s num =%d\n", stu1.age, stu1.name, stu1.num);*/
//
//	stu2 = &stu;
//	printf("age =%d name =%s num =%d\n", stu.age, stu.name, stu.num);//age =100 name =aaa num =666
//	printf("age =%d name =%s num =%d\n", (*stu2).age, (*stu2).name, (*stu2).num);//age =100 name =aaa num =666
//	strcpy((*stu2).name, "bbb");
//	(*stu2).num = 777;
//	printf("age =%d name =%s num =%d\n", stu2->age, stu2->name, stu2->num);//age =100 name =bbb num =777
//
//
//	return 0;
//}