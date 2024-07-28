#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//转义字符
//\? - 书写多个问号的时候使用 防止被解析成（三字母词）-三字母词 指的是三个字母组成一个新的词
//\n - 换行
//\\表示反斜杆,防止被解释为转义字符
//\'表示字符常量'
//\"表示字符串内部的双引号
//\t 水平制表符 即空格
//\ddd  ddd代表1~3个八进制的数字
//\xdd dd代表2个十六进制数字
//输出字符用%c 输出字符串用%s
//65在ASCII中为A
//int main()
//{
//	printf("(what are you doing ??\?)");//示范 - 其他类似
//	return 0;
//}
//int main();
//{
//	printf("%d\n", \x30) //当为%d时 输出的为对应的十进制数字 为%c时输出的为对应的ASCII中字母
//		return 0;
//}
////为C++注释风格
/*
int c=0;
*/
//c语言的注释风格
//选择语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("高三摆不摆烂(1/0)?");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf('G');
//	else
//		printf("完美结局\n");
//	return 0;
//}
//int main()
//{
//	printf("%c",'a');//为何这里不能printf('a')
//	return 0;
//}
// 循环语句
//int main()
//{
//	int line = 0;
//	while(line<300)
//	{
//		printf("写代码\n");
//		line++;
//	}
//	if (line = 300)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//用函数的方式解决相加
//int coke(int x, int y);
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//int num1 = 0;
//int num2 = 0;
//scanf("%d, %d", &num1, &num2);
//int sum = coke(num1, num2);//普通方式 int sum =num1+num2;
//printf("%d\n", sum);
//}
//数组- 一组相同类型的元素组成的集合
int main()
{
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int i = 0;
while (i < 10)
{
	printf("%d\n", arr[i]);
	i++;
}
//char ch[5]={'a','b','c'};//不完全初始化 剩余部分自动用0补齐
return 0;
}