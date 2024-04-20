#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 斐波那契数列
//long long Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
////递推
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


//// 青蛙跳台阶
//// 递归 
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
//// 递推 1 2 3 5 8 13
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


// 上台阶
//Description
//楼梯有n(0 < n < 71)阶台阶, 上楼时可以一步上1阶, 也可以一步上2阶, 也可以一步上3阶，
//编程计算共有多少种不同的走法。
//Input
//输入的每一行包括一组测试数据，即为台阶数n。最后一行为0，表示测试结束。
// 递tui 

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




//科学家在热带森林中发现了一种特殊的昆虫，这种昆虫的繁殖能力很强。
//每对成虫过个x月后每个月产y对卵，每对卵要过两个月长成成虫。
//假设每个成虫不死，第一个月只有一对成虫，且卵长成成虫后的第一个月不产卵（过个x月产卵），
//问过个z月以后，共有成虫多少对？0 <= x <= 20, 1 <= y <= 20，x <= z <= 50


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