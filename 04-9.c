#include <stdio.h>
#include <stdlib.h>

//ц╟ещеепР
//int main()
//{
//	int arr[] = { 1,6,8,0,4,3,9,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (size_t i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);//16804392
//	}
//	putchar('\n');
//
//	int temp = 0;
//	for (size_t i = 0; i < len - 1; i++)
//	{
//		for (size_t j = 0; j < len - 1 - i; j++)
//		{
//			/*if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}*/
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (size_t i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);//01234689  98643210
//	}
//	putchar('\n');
//
//	return 0;
//}