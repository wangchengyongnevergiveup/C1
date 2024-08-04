#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体数组
//struct student
//{
//	int age;
//	char name[10];
//	int num;
//};
//
//int main()
//{
//	/*struct student arr1[] = {
//		10,"aaa",1,
//		20,"bbb", 2,
//		30,"ccc",3,
//		40,"ddd",4,
//		50,"eee",5
//	};
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//	for (size_t i = 0; i < n; i++)
//	{
//		printf("age =%d name =%s num =%d\n", arr1[i].age, arr1[i].name, arr1[i].num);
//	}*/
//
//	struct student arr2[3];
//	arr2[0].age = 100; strcpy(arr2[0].name, "xxx"); arr2[0].num = 100;
//	(*(arr2 + 1)).age = 200; strcpy((*(arr2 + 1)).name, "yyy"); (*(arr2 + 1)).num = 200;
//	(arr2 + 2)->age = 300; strcpy((arr2 + 2)->name, "zzz"); (arr2 + 2)->num = 300;
//
//	int n = sizeof(arr2) / sizeof(arr2[0]);
//	for (size_t i = 0; i < n; i++)
//	{
//		printf("age =%d name =%s num =%d\n", arr2[i].age, arr2[i].name, arr2[i].num);
//	}
//
//	return 0;
//}
