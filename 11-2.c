#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//�ļ�������

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
//	srand(time(NULL)); // ���������
//	for (size_t i = 0; i < 10; i++)
//	{
//		fprintf(fp, "%d\n", rand() % 100);  // �����ɵ������д���ļ�
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
//		fscanf(fp, "%d ", &arr[i]);// ���ļ��ж�ȡһ�����������������arr
//		i++;
//		if (feof(fp))				// �ȴ洢�����жϣ���ֹ���һ��Ԫ�ض�ʧ
//			break;
//	}
//	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));  // �Զ�ȡ����������������
//	fclose(fp);			
//
//	fp = fopen("test2-02.txt", "w");		// ���´��ļ����ԭδ�����ļ���
//	if (!fp) 
//	{
//		return ;
//	}
//	for (size_t i = 0; i < 10; i++)
//		fprintf(fp, "%d ", arr[i]);	// д�ź�������鵽�ļ�
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