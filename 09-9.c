#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//π≤”√ÃÂ
//union test
//{
//	char a;
//	short b;
//	int	c;
//	char str[13];	
//};
//
//int main()
//{
//	union test t1;
//	t1.c= 0x87654321;
//	printf("&t1 = %p\n", &t1);// 012FFABC
//	printf("&t1.a = %p\n", &(t1.a));//012FFABC
//	printf("&t1.b = %p\n", &(t1.b));//012FFABC
//	printf("&t1.c = %p\n", &(t1.c));//012FFABC
//	printf("a = %x\n", t1.a);//21
//	printf("b = %x\n", t1.b);//4321
//	printf("c = %x\n", t1.c);//87654321
//
//	t1.b = 0x3A;
//	printf("a = %x\n", t1.a);//3a
//	printf("b = %x\n", t1.b);//3a
//	printf("c = %x\n", t1.c);//8765003a
//	printf("sizeof(t1) = %u\n", sizeof(t1));//16
//
//	return 0;
//}