#include <stdio.h>
#include <stdlib.h>

//指针与数组
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	printf("%d ", *p);//打印结束后，p指向一块无效地址空间(野指针)。
	//	p++;
	//}

	//printf("arr[0] = %d\n", arr[0]);//0
	//printf("*(arr+0) = %d\n", *(arr + 0));//0
	//printf("p[0] = %d\n", p[0]);//0
	//printf("*(p+0) = %d\n", *(p + 0));//0

	//printf("sizeof(arr) = %u\n", sizeof(arr));//40
	//printf("sizeof(p) = %u\n", sizeof(p));//4

	//int len = sizeof(arr) / sizeof(arr[0]);
	//printf("first p = %p\n", p);// 0115FA0C
	//for (size_t i = 0; i < len; i++)
	//{
	//	printf("%d ", *p);//打印结束后，p指向一块无效地址空间(野指针)。
	//	p++;
	//}
	//putchar('\n');
	
	 
	//指针在数组中 +- 整数
//	int* p2 = &arr[5];
//	printf("p2 - 2 = %p\n", p2 - 2);//0073FADC
//	printf("&arr[3] = %p\n", &arr[3]);//0073FADC
//
//	// &数组名 +1
//	short a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("a = %p\n", a);//0073FA9C
//	printf("&a[0] = %p\n", &a[0]);//0073FA9C
//	printf("a + 1 = %p\n", a+1);//0073FA9E
//	printf("&a[1] = %p\n", &a[1]);//0073FA9E
//
//	printf("&a = %p\n", &a);//0073FA9C
//	printf("&a + 1 = %p\n", &a + 1);//0073FAB0
//
//
//	return 0;
//}