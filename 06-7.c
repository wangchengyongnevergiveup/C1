#include <stdio.h>
#include <stdlib.h>

//ָ������
//int main()
//{
//	int a = 10; int b = 20; int c = 30;
//	int* p1 = &a; int* p2 = &b; int* p3 = &c;
//	int* arr1[] = { p1,p2,p3 };
//
//	printf("*(arr1[0]) = %d\n", *(*(arr1+0)));//10
//	printf("*(arr1[0]) = %d\n", **arr1);//10
//
//	int x[] = { 10 ,15 }; int y[] = { 20 }; int z[] = { 30 };
//	int* arr2[] = { x,y,z };
//	printf("*(arr2[0]) = %d\n", *(*(arr2 + 0)));//10
//	printf("*(arr2[0]) = %d\n", **arr2);//10
//
//	//ָ�����鱾�ʣ���һ������ָ�롣 ��ά���飬 Ҳ��һ������ָ��
//	printf("arr2[0][0]) = %d\n", *(*(arr2 + 0)+0));//10
//	printf("arr2[0][1]) = %d\n", *(*(arr2 + 0) + 1));//15
//
//	return 0;
//}