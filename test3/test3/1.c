#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//ת���ַ�
//\? - ��д����ʺŵ�ʱ��ʹ�� ��ֹ�������ɣ�����ĸ�ʣ�-����ĸ�� ָ����������ĸ���һ���µĴ�
//\n - ����
//\\��ʾ��б��,��ֹ������Ϊת���ַ�
//\'��ʾ�ַ�����'
//\"��ʾ�ַ����ڲ���˫����
//\t ˮƽ�Ʊ�� ���ո�
//\ddd  ddd����1~3���˽��Ƶ�����
//\xdd dd����2��ʮ����������
//����ַ���%c ����ַ�����%s
//65��ASCII��ΪA
//int main()
//{
//	printf("(what are you doing ??\?)");//ʾ�� - ��������
//	return 0;
//}
//int main();
//{
//	printf("%d\n", \x30) //��Ϊ%dʱ �����Ϊ��Ӧ��ʮ�������� Ϊ%cʱ�����Ϊ��Ӧ��ASCII����ĸ
//		return 0;
//}
////ΪC++ע�ͷ��
/*
int c=0;
*/
//c���Ե�ע�ͷ��
//ѡ�����
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�����ڲ�����(1/0)?");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf('G');
//	else
//		printf("�������\n");
//	return 0;
//}
//int main()
//{
//	printf("%c",'a');//Ϊ�����ﲻ��printf('a')
//	return 0;
//}
// ѭ�����
//int main()
//{
//	int line = 0;
//	while(line<300)
//	{
//		printf("д����\n");
//		line++;
//	}
//	if (line = 300)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}
//�ú����ķ�ʽ������
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
//int sum = coke(num1, num2);//��ͨ��ʽ int sum =num1+num2;
//printf("%d\n", sum);
//}
//����- һ����ͬ���͵�Ԫ����ɵļ���
int main()
{
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int i = 0;
while (i < 10)
{
	printf("%d\n", arr[i]);
	i++;
}
//char ch[5]={'a','b','c'};//����ȫ��ʼ�� ʣ�ಿ���Զ���0����
return 0;
}