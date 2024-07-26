#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
//printf-库函数-屏幕中打印信息
//char 字符数据类型
// short 短整型
// int 整形
// long 长整形
// long long 更长的整形
// float 单精度浮点数
// double 双精度浮点数
// 1byte=8bit
// sizeof 计算类型或变量所占空间的大小
// %d打印一个整数
// %lf打印浮点
// &取地址
// scanf 输入函数
//int main()
//{
//	printf("Hello World\n");
//	char ch = 'a';
///int age = 20;
//	short num = 10;
//	float weight = 55.5;
//	double d = 0.0;
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	//return 0;
//}
//局外变量
//int c = 5;
//
//int main()
//{
//	//局内变量及计算
//	int age = 0;
//	double weight = 54.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//一个代码求2个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}