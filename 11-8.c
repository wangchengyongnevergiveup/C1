#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������ fflush �ɹ�����0
int main()
{
	FILE* fp = fopen("test2-07.txt", "w+");
	if (!fp)
	{
		return -1;
	}
	char m = 0;
	while (1)
	{
		scanf("%c", &m);
		if (m == ':')
		{
			break;
		}
		fputc(m, fp);
		fflush(fp);  // �ֶ�ˢ���ļ����嵽������̡�
	}
	// ���ļ��ر�ʱ�����Զ�ˢ�»�������
	fclose(fp);

	return 0;
}