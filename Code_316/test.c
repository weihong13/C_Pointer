#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// oj/631
/*
股神：假设买入1元股票，股票的变化规律是第一天不变（0），第二天涨1元（1），第三天跌1元（ - 1），
第四天涨1元（1），第五天涨1元（1），第六天跌1元（ - 1），第七天涨1元（1），第八天涨1元（1），
第九天涨1元（1），第十天跌1元（ - 1）...求N天后的股票剩余价格
*/
//int main() {
//	int n = 0;
//	int day = 3;
//	int t = 3;
//	int count = 0;
//	scanf("%d", &n);
//
//	while (day <=n) {
//
//		count++;
//		day = day + t;
//		t++;
//	}
//
//	printf("%d", n-2*count);
//
//  return 0;
//}


// oj/632
/*
一条长廊里依次装有n(1 ≤ n ≤ 65535)盏电灯，从头到尾编号1、2、3、…n-1、n。
每盏电灯由一个拉线开关控制。开始，电灯全部关着。
有n个学生从长廊穿过。第一个学生把号码凡是1的倍数的电灯的开关拉一下；
接着第二个学生把号码凡是2的倍数的电灯的开关拉一下；
接着第三个学生把号码凡是3的倍数的电灯的开关拉一下；
如此继续下去，最后第n个学生把号码凡是n的倍数的电灯的开关拉一下。
n个学生按此规定走完后，长廊里电灯有几盏亮着。
注：电灯数和学生数一致。
*/
//#include<math.h>
//int main() {
//	int n = 0;
//	int std = 1;
//	int count = 0;
//	scanf("%d", &n);
//	while (std <= sqrt(n)) {
//		count++;
//		std++;
//	}
//	printf("%d", count);
//	return 0;
//}


// 图形打印
// 1、包含几种图案
// 2、图案个数 与行数之间的关系
// 3、有几种图案就 需要在循环内部写几个 并列的循环

// oj/614
/*
例如：输入3，打印结果如下：
*
**
***
*/

//int main() {
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <= i; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


// oj 615
/*
例如：输入4，打印结果如下：
   *
  **
 ***
****
*/

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <= n-i; j++) 
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 617
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d",j);
//		}
//		for (int j = 1; j <= i-1; j++)
//		{
//			printf("%d", i-j);
//		}
//		printf("\n");
//	}
//}

//int main() {
//	int n = 0;
//
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) 
//	{
//		int a = 2;
//		for (int j = 1; j <= n-i; j++) 
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= 2*i-1; j++) 
//		{
//			
//			if (i >= j) {
//				printf("%d", j);
//			}
//			else {
//				printf("%d", j-a);
//				a+=2;
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}




// oj 627
//编写一个程序,求s=1+(1+2)+(1+2+3)+…+(1+2+3+…+n)的值。

//int main() {
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			sum += j;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


// oj/625
//质数（prime number）又称素数，有无限个。
//质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数，这样的数称为质数。
//#include<math.h>
//int is_prime(int x) {
//	int a;
//	for (int i = 2; i <= sqrt(x); i++) 
//	{
//		a = 1;
//		if (x % i == 0) 
//		{
//			a = 0;
//			break;
//		}
//	}
//	return a;
//}
//int main() {
//	int n = 0;
//	scanf("%d",&n);
//	int ret = is_prime(n);
//	printf("%d", ret);
//	return 0;
//}


//// oj 1435
//int main() {
//	int h = 0;
//	scanf("%d", &h);
//	double first = h;
//	double fan_tan = (double)h / 2;
//	double sum = h;
//	int i = 1;
//	while (i < 10) {
//
//		fan_tan = fan_tan / 2;
//		sum = sum + first;
//
//		first /= 2;
//		i++;
//	}
//	printf("%g\n%g", sum, fan_tan);
//}



//int Max(int x, int y, int z) {
//	if (x >= y && x >= z) {
//		return x;
//	}
//	else if (y >= x && y >= z) {
//		return y;
//	}
//	else if (z >= x && z >= y) {
//		return z;
//	}
//}
//int Min(int x, int y, int z) {
//	if (x <= y && x <= z) {
//		return x;
//	}
//	else if (y <= x && y <= z) {
//		return y;
//	}
//	else if (z <= x && z <= y) {
//		return z;
//	}
//}
//double Average(double x, double y, double z) {
//	double aver = (x + y + z) / 3;
//	return aver;
//}
//
//int main() {
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	int max = Max(a, b, c);
//	int min = Min(a, b, c);
//	double average = Average((double)a, (double)b, (double)c);
//	printf("%d %d %.3f", max, min, average);
//}


