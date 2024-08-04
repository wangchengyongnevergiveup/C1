#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//文件版排序

//void BubbleSort(int* src, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (src[j] > src[j + 1])
//			{
//				int temp = src[j];
//				src[j] = src[j + 1];
//				src[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void write_rand()
//{
//	FILE* fp = fopen("test2-02.txt", "w");
//	if (!fp) 
//	{
//		return ;
//	}
//	srand(time(NULL)); // 随机数种子
//	for (size_t i = 0; i < 10; i++)
//	{
//		fprintf(fp, "%d\n", rand() % 100);  // 将生成的随机数写入文件
//	}
//	fclose(fp);
//}
//
//void read_rand()
//{
//	int arr[10], i = 0;
//	FILE* fp = fopen("test2-02.txt", "r");
//	if (!fp)  
//	{
//		return ;
//	}
//	while (1)
//	{
//		fscanf(fp, "%d ", &arr[i]);// 从文件中读取一个随机数，存入数组arr
//		i++;
//		if (feof(fp))				// 先存储，后判断，防止最后一个元素丢失
//			break;
//	}
//	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));  // 对读取到的乱序数组排序
//	fclose(fp);			
//
//	fp = fopen("test2-02.txt", "w");		// 重新打开文件清空原未排序文件。
//	if (!fp) 
//	{
//		return ;
//	}
//	for (size_t i = 0; i < 10; i++)
//		fprintf(fp, "%d ", arr[i]);	// 写排好序的数组到文件
//
//	fclose(fp);
//}
//
//int main()
//{
//	write_rand();
//	getchar();
//	read_rand();
//
//	return 0;
//}