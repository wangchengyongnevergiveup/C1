#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ļ��������д

//typedef struct student {
//	int age;
//	char name[10];
//	int num;
//} stu_t;
//
//
//int main()
//{
//	stu_t stu[4] = {10, "aaa", 10, 20, "bbb", 20, 30, "ccc", 30, 40, "ddd", 40};
//	stu_t s1;
//	FILE* fp = fopen("test2-05.txt", "wb+");
//	if (!fp)
//	{
//		return -1;
//	}
//	int ret = fwrite(&stu[0], 1, sizeof(stu), fp); 
//	//printf("ret = %d\n", ret);//80
//
//	fseek(fp, sizeof(stu_t) * 2, SEEK_SET);//���ļ���ʼλ�ã����ƫ��һ��stu�ṹ��
//	ret = fread(&s1, 1, sizeof(s1), fp);
//	printf("ret = %d\n", ret);//20
//	printf("1 age= %d, name=%s, num=%d\n", s1.age, s1.name, s1.num);//1 age= 30, name=ccc, num=30
//
//	int len = ftell(fp);//��ȡ�ļ���ǰ��дָ��λ�ã����ļ���ʼλ�õ�ƫ����
//	printf("len = %d\n", len); //len = 60
//
//	rewind(fp);	// ���ļ���дָ��ؾ���ʼ
//	ret = fread(&s1, 1, sizeof(s1), fp);
//	printf("2 age= %d, name=%s, num=%d\n", s1.age, s1.name, s1.num);//2 age= 10, name=aaa, num=10
//
//	fseek(fp, 0, SEEK_END); //���ļ���дָ��ŵ��ļ���β
//	len = ftell(fp);
//	printf("�ļ���СΪ��%d\n", len);//�ļ���СΪ��80
//
//	fclose(fp);
//
//	return 0;
//}