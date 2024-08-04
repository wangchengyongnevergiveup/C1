#include <stdio.h>
#include <stdlib.h>

//二维数组
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
//	printf("二维数组的大小为：%u\n", sizeof(arr2));//32
//	printf("二维数组行的大小为：%u\n", sizeof(arr2[0]));//16
//	printf("二维数组元素的大小为：%u\n", sizeof(arr2[0][0]));//4
//	printf("二维数组的行数为：%u\n", sizeof(arr2)/ sizeof(arr2[0]));//2
//	printf("二维数组的列数为：%u\n", sizeof(arr2[0]) / sizeof(arr2[0][0]));//4
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