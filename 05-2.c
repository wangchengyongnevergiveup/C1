#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//获取学生成绩
//int main()
//{
//	int scores[5][3] = { 0 };
//	int row = sizeof(scores) / sizeof(scores[0]);
//	int col = sizeof(scores[0]) / sizeof(scores[0][0]);
//
//	//输入 五个学生 三门功课 的成绩
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			scanf("%d", &scores[i][j]);
//		}
//	}
//
//	//求一个学生的总成绩  按行求和
//	for (size_t i = 0; i < row; i++)//每个学生
//	{
//		int sum1 = 0;
//		for (size_t j = 0; j < col; j++)
//		{
//			sum1 += scores[i][j];
//		}
//		printf("第%d个学生的总成绩为：%d\n", i + 1, sum1);
//	}
//	//求一门功课的总和  按列求和
//	for (size_t i = 0; i < col; i++)//每个学生
//	{
//		int sum2 = 0;
//		for (size_t j = 0; j < row; j++)
//		{
//			sum2 += scores[j][i];
//		}
//		printf("第%d门功课的总和为：%d\n", i + 1, sum2);
//	}
//
//	return 0;
//
//}