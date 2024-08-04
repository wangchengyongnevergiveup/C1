#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体做函数参数
//struct student
//{
//	int age;
//	char name[10];
//	int score;
//	short num;
//};
//
//void func1(struct student stu)
//{
//	stu.age = 100;
//	strcpy(stu.name, "aaa");
//	stu.num = 100;
//	stu.score = 100;
//	printf("func1 stu: age = %d, name= %s\n", stu.age, stu.name);//age = 100, name= aaa
//	printf("func1 stu: score = %d, num= %d\n", stu.score, stu.num);//score = 100, num= 100
//}
//
//void func2(struct student* stu)
//{
//	stu->age = 100;
//	strcpy(stu->name, "aaa");
//	stu->num = 100;
//	stu->score = 100;
//	printf("func2 stu: age = %d, name= %s\n", stu->age, stu->name);//age = 100, name= aaa
//	printf("func2 stu: score = %d, num= %d\n", stu->score, stu->num);//score = 100, num= 100
//}
//
//struct student func3(struct student stu)
//{
//	stu.age = 100;
//	strcpy(stu.name, "aaa");
//	stu.num = 100;
//	stu.score = 100;
//	printf("func3 stu: age = %d, name= %s\n", stu.age, stu.name);//age = 100, name= aaa
//	printf("func3 stu: score = %d, num= %d\n", stu.score, stu.num);//score = 100, num= 100
//	return stu;
//}
//
//struct student* func4(struct student* stu)
//{
//	stu->age = 100;
//	strcpy(stu->name, "aaa");
//	stu->num = 100;
//	stu->score = 100;
//	printf("func4 stu: age = %d, name= %s\n", stu->age, stu->name);//age = 100, name= aaa
//	printf("func4 stu: score = %d, num= %d\n", stu->score, stu->num);//score = 100, num= 100
//	return stu;
//}
//
//
//int main()
//{
//	struct student stu1 = { 200,"xxx",200,200 };
//	//func1(stu1);
//	//printf("stu1 age = %d, name= %s\n", stu1.age, stu1.name);// age = 200, name= xxx
//	//printf("stu1 score = %d, num= %d\n", stu1.score, stu1.num);//score = 200, num= 200
//
//	//func2(&stu1);
//	//printf("stu1 age = %d, name= %s\n", stu1.age, stu1.name);//age = 100, name= aaa
//	//printf("stu1 score = %d, num= %d\n", stu1.score, stu1.num);//score = 100, num= 100
//
//	struct student stu2 = stu1;
//
//	struct student stu3 = func3(stu1);
//	printf("stu3 age = %d, name= %s\n", stu3.age, stu3.name);//age = 100, name= aaa
//	printf("stu3 score = %d, num= %d\n", stu3.score, stu3.num);//score = 100, num= 100
//
//	struct student* stu4 = func4(&stu1);
//	printf("stu4 age = %d, name= %s\n", stu4->age, stu4->name);//age = 100, name= aaa
//	printf("stu4 score = %d, num= %d\n", stu4->score, stu4->num);//score = 100, num= 100
//
//	return 0;
//}