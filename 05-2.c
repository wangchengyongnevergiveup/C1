#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��ȡѧ���ɼ�
//int main()
//{
//	int scores[5][3] = { 0 };
//	int row = sizeof(scores) / sizeof(scores[0]);
//	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
//
//	//���� ���ѧ�� ���Ź��� �ĳɼ�
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			scanf("%d", &scores[i][j]);
//		}
//	}
//
//	//��һ��ѧ�����ܳɼ�  �������
//	for (size_t i = 0; i < row; i++)//ÿ��ѧ��
//	{
//		int sum1 = 0;
//		for (size_t j = 0; j < col; j++)
//		{
//			sum1 += scores[i][j];
//		}
//		printf("��%d��ѧ�����ܳɼ�Ϊ��%d\n", i + 1, sum1);
//	}
//	//��һ�Ź��ε��ܺ�  �������
//	for (size_t i = 0; i < col; i++)//ÿ��ѧ��
//	{
//		int sum2 = 0;
//		for (size_t j = 0; j < row; j++)
//		{
//			sum2 += scores[j][i];
//		}
//		printf("��%d�Ź��ε��ܺ�Ϊ��%d\n", i + 1, sum2);
//	}
//
//	return 0;
//
//}