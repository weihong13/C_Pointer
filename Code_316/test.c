#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


// oj/631
/*
���񣺼�������1Ԫ��Ʊ����Ʊ�ı仯�����ǵ�һ�첻�䣨0�����ڶ�����1Ԫ��1�����������1Ԫ�� - 1����
��������1Ԫ��1������������1Ԫ��1�����������1Ԫ�� - 1������������1Ԫ��1�����ڰ�����1Ԫ��1����
�ھ�����1Ԫ��1������ʮ���1Ԫ�� - 1��...��N���Ĺ�Ʊʣ��۸�
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
һ������������װ��n(1 �� n �� 65535)յ��ƣ���ͷ��β���1��2��3����n-1��n��
ÿյ�����һ�����߿��ؿ��ơ���ʼ�����ȫ�����š�
��n��ѧ���ӳ��ȴ�������һ��ѧ���Ѻ��뷲��1�ı����ĵ�ƵĿ�����һ�£�
���ŵڶ���ѧ���Ѻ��뷲��2�ı����ĵ�ƵĿ�����һ�£�
���ŵ�����ѧ���Ѻ��뷲��3�ı����ĵ�ƵĿ�����һ�£�
��˼�����ȥ������n��ѧ���Ѻ��뷲��n�ı����ĵ�ƵĿ�����һ�¡�
n��ѧ�����˹涨����󣬳��������м�յ���š�
ע���������ѧ����һ�¡�
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


// ͼ�δ�ӡ
// 1����������ͼ��
// 2��ͼ������ ������֮��Ĺ�ϵ
// 3���м���ͼ���� ��Ҫ��ѭ���ڲ�д���� ���е�ѭ��

// oj/614
/*
���磺����3����ӡ������£�
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
���磺����4����ӡ������£�
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
//��дһ������,��s=1+(1+2)+(1+2+3)+��+(1+2+3+��+n)��ֵ��

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
//������prime number���ֳ������������޸���
//��������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ������������������������Ϊ������
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


