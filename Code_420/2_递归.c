#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 쳲���������
//long long Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
////����
//long long test(int n) {
//
//	long long a = 1;
//	long long b = 1;
//	long long c = 1;
//	for (int i = 2; i < n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//
//	return c;
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	// long long ret = Fibonacci(n);
//	long long ret = test(n);
//	printf("%lld", ret);
//	return 0;
//}


//// ������̨��
//// �ݹ� 
//int jumpCount(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	
//	return jumpCount(n - 2) + jumpCount(n - 1);
//}
//
//// ���� 1 2 3 5 8 13
//int jumpCount1(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return c;
//	}
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = jumpCount1(n);
//	printf("%d", ret);
//
//	return 0;
//}


// ��̨��
//Description
//¥����n(0 < n < 71)��̨��, ��¥ʱ����һ����1��, Ҳ����һ����2��, Ҳ����һ����3�ף�
//��̼��㹲�ж����ֲ�ͬ���߷���
//Input
//�����ÿһ�а���һ��������ݣ���Ϊ̨����n�����һ��Ϊ0����ʾ���Խ�����
// ��tui 

//long long num[71];
//int main()
//{
//	num[1] = 1;
//	num[2] = 2;
//	num[3] = 4;
//	for (int i = 4; i < 71; i++)
//	{
//		num[i] = num[i - 1] + num[i - 2] + num[i - 3];
//	}
//
//	int n = 0;
//	while (scanf("%d", &n) && n != 0)
//	{
//		printf("%lld\n", num[n]);
//	} 
//
//	return 0;
//}




//int main()
//{
//	long long a = 1;
//	long long b = 1;
//	long long c = 0;
//	printf("%lld\n", a);
//	printf("%lld\n", b);
//	for (int i = 3; i < 41; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		printf("%lld\n", c);
//	}
//
//
//
//	return 0;
//}




//��ѧ�����ȴ�ɭ���з�����һ����������棬��������ķ�ֳ������ǿ��
//ÿ�Գɳ����x�º�ÿ���²�y���ѣ�ÿ����Ҫ�������³��ɳɳ档
//����ÿ���ɳ治������һ����ֻ��һ�Գɳ棬���ѳ��ɳɳ��ĵ�һ���²����ѣ�����x�²��ѣ���
//�ʹ���z���Ժ󣬹��гɳ���ٶԣ�0 <= x <= 20, 1 <= y <= 20��x <= z <= 50


//

long long imago[52];
long long ovum[52];
int main() {


	
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);

	for (int i = 1; i <= x; i++)
	{
		imago[i] = 1;
		ovum[i] = 0;
	}
	
	for (int i = x + 1; i <= z + 1; i++)
	{
		ovum[i] = y * imago[i - x];
		imago[i] = imago[i - 1] + ovum[i - 2];
	}

	printf("%lld", imago[z + 1]);
	return 0;
}