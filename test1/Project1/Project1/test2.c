#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
//printf-�⺯��-��Ļ�д�ӡ��Ϣ
//char �ַ���������
// short ������
// int ����
// long ������
// long long ����������
// float �����ȸ�����
// double ˫���ȸ�����
// 1byte=8bit
// sizeof �������ͻ������ռ�ռ�Ĵ�С
// %d��ӡһ������
// %lf��ӡ����
// &ȡ��ַ
// scanf ���뺯��
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
//�������
//int c = 5;
//
//int main()
//{
//	//���ڱ���������
//	int age = 0;
//	double weight = 54.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//һ��������2�������ĺ�
//scanf���������뺯��
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