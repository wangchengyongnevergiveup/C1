#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//堆区申请空间
//int main(int argc, char* argv[])
//{
	////一级指针申请
	////申请内存
	//int* p = (int*)malloc(sizeof(int) * 4);
	//if (p == NULL)
	//{
	//	printf("malloc error\n");
	//	return -1;
	//}
	//char* temp = p;
	////写
	//for (size_t i = 0; i < 4; i++)
	//{
	//	p[i] = i;
	//}
	////读
	//for (size_t i = 0; i < 4; i++)
	//{
	//	printf("%d ",*p);//0 1 2 3
	//	p++;
	//}
	////释放申请的内存
	//free(temp);
	//p = NULL;

	//二级指针申请
	//申请内存
//	int** p = malloc(sizeof(int*) * 3);
//	if (p == NULL)
//	{
//		printf("malloc error\n");
//		return -1;
//	}
//	for (size_t i = 0; i < 3; i++)
//	{
//		p[i] = malloc(sizeof(int)*5);
//		if (p[i] == NULL)
//		{
//			printf("malloc error\n");
//			return -1;
//		}
//	}
//	
//	//写
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 5; j++)
//		{
//			p[i][j] = i+j;
//		}
//		
//	}
//	//读
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 5; j++)
//		{ 
//				printf("%d ", p[i][j]);//0 1 2 3}
//			
//		}
//		
//	}
//	//释放申请的内存
//	for (size_t i = 0; i < 3; i++)
//	{
//		free(p[i]);
//		p[i] = NULL;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
