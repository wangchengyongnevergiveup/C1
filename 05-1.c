#include <stdio.h>
#include <stdlib.h>

//��ά����
//int main()
//{
//	/*int arr1[2][3] = { {1,2,3},{4,5,6} };
//	for (size_t i = 0; i < 2; i++)
//	{
//		for (size_t j = 0; j < 3; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		putchar('\n');
//	}*/
//
//	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };
//	//int arr3[][4] = { 1,2,3,4,5,6,7,8 };
//	//int arr3[][]={1,2,3,4,5,6}
//	printf("��ά����Ĵ�СΪ��%u\n", sizeof(arr2));//32
//	printf("��ά�����еĴ�СΪ��%u\n", sizeof(arr2[0]));//16
//	printf("��ά����Ԫ�صĴ�СΪ��%u\n", sizeof(arr2[0][0]));//4
//	printf("��ά���������Ϊ��%u\n", sizeof(arr2)/ sizeof(arr2[0]));//2
//	printf("��ά���������Ϊ��%u\n", sizeof(arr2[0]) / sizeof(arr2[0][0]));//4
//
//	int row = sizeof(arr2) / sizeof(arr2[0]);
//	int col = sizeof(arr2[0]) / sizeof(arr2[0][0]);
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		putchar('\n');
//	}
//
//	printf("arr2 = %p\n", arr2);//0076F93C
//	printf("arr2[0] = %p\n", arr2[0]);//0076F93C
//	printf("&arr2 = %p\n", &arr2[0][0]);//0076F93C
//
//	return 0;
//}