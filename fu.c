#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//�׳�
//{
//	int n = 1;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int sushu(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)//�ж��Ƿ��ܱ�����
//		{
//			break;//�ܱ�������ֱ������
//		}
//		return n;//��ȫ����������˵���������������Լ�
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int t = 5;
//	int i = 0;
//	while (t--)
//	{
//		scanf("%d", &n);
//		if (i = sushu(n))//�ж��Ƿ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = arr[9];
//	for (int i = 9; i > 0; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//	arr[0] = a;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}