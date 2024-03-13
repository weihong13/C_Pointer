#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	int n = 0;
//	int* p = &n; // 定义指针时，几个*就是几级指针，一级指针存变量地址
//	int** pa = &p; // 二级指针存 一级指针的地址 
//	// *pa = p = &n
//	// **pa = *p = n
//	return 0;
//}

// if 语句
//// OJ / 606
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b) 
//	{
//		if (b >= c) 
//		{
//			printf("%d", a);
//		}
//		else 
//		{
//			if (c > a) 
//			{
//				printf("%d", c);
//			}
//		}
//	}
//	else 
//	{
//		if (b > c) 
//		{
//			printf("%d", b);
//		}
//		else 
//		{
//			printf("%d", c);
//		}
//	}
//	return 0;
//}

////// OJ / 606
//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	// 使用else if 的话，一旦 上一个条件成立，就完成条件判断了，不会重复执行
//	if (a >= b && a >= c) { // a 最大
//		printf("%d", a);
//	}
//	else if (b >= a && b >= c) { // b 最大
//		printf("%d", b);
//	}
//	else if (c >= a && c >= b) {  // c 最大
//		printf("%d", c);
//	}
//	return 0;
//}

// OJ/610
/*
Input
输入当前时间：19时17分59秒
Output
输出时间是：19时18分0秒*/
//int main() {
//	int hour = 0;
//	int minute = 0;
//	int second = 0;
//	scanf("%d%d%d", &hour, &minute, &second);
//	// 给秒加一
//	second += 1;
//	// 判断秒是否进位
//	if (60 == second) {
//		// 秒进位后，分加一
//		minute ++;
//		// 将秒归零
//		second = 0;
//		// 判断分是否进位
//		if (60 == minute) {
//			// 分进位后，时加一
//			hour++;
//			// 分归零
//			minute = 0;
//			// 判断 小时 是否进位
//			if (24 == hour) {
//				// 进位直接变为0
//				hour=0;
//			}
//		}
//	}
//	printf("%d时%d分%d秒", hour, minute, second);
//	return 0;
//}

// OJ/605 数字1-7分别对应星期一到星期日，输入一个数，相对应打印星期几(使用if)
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	if (1 == i) {
//		printf("星期一");
//	}
//	else if (2 == i) {
//		printf("星期二");
//	}
//	else if (3 == i) {
//		printf("星期三");
//	}
//	else if (4 == i) {
//		printf("星期四");
//	}
//	else if (5 == i) {
//		printf("星期五");
//	}
//	else if (6 == i) {
//		printf("星期六");
//	}
//	else if (7 == i) {
//		printf("星期日");
//	}
//	return 0;
//}

//// OJ/605 数字1-7分别对应星期一到星期日，输入一个数，相对应打印星期几(使用switch)
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		case 1:
//			printf("星期一");
//			break;
//		case 2:
//			printf("星期二");
//			break;
//		case 3:
//			printf("星期三");
//			break;
//		case 4:
//			printf("星期四");
//			break;
//		case 5:
//			printf("星期五");
//			break;
//		case 6:
//			printf("星期六");
//			break;
//		case 7:
//			printf("星期日");
//			break;
//	}
//	return 0;
//}