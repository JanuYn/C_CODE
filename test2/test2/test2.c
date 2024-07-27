#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域为局部变量或全局变量的可作用范围
//extern:引用
//变量生命周期:变量的创建和销毁之间的时间段
//局部变量的生命周期:进入局部范围生命开始,出局部范围生命结束
//全局变量的生命周期:程序的生命周期
//extern int coke;
//int main()
//{
//	printf("%d\n", coke);
//	return 0;
//}
//const修饰常变量
//常变量有常属性:不能被改变的属性,但常变量不是常量 所以无法放入数组中
//int main()
//{
//	int arr[10] = { 0 };
//	const int n = 2;
//	int arr[n] = { 0 };//如此所示
//	return 0;
//}
//字面常量
//列如:3.14;
// 'a';
// "abcd";
//10;
//#define定义的标识符常量
//#define Max 1999
//int main()
//{
//	int n = Max;
//	printf("n=%d\n", n);
//
//	return 0;
//}
//枚举常量
//enum:进行枚举
//enum Sex
//{
//	MALE=3,//赋予初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//		printf("%d\n", s);
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//字符串就是一串字符
//字符数组-数组是一组相同类型的元素
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串结束的标志
int main()
{
	char arr[] = "hello";
	return 0;
}
//\0不影响字符串长度,只影响大小
// int main()
// {
//int len=strlen("abc");//string length
//print("%d\n",len);
// return 0;
// }
// int main()
// {
//char arr1[]="abc"
//char arr2[]={'a','b','c'}
//printf("%d\n",strlen(arr1);
//printf("%d\n",strlen(arr2)";
//return 0;
//