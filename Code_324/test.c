#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// oj 650
/*
定义一个int型的一维数组，包含10个元素，分别赋值
1)然后将数组中的元素都向前移一个位置，最后一个位置放的是第一个元素
2)然后将数组中的元素都向后移一个位置，第一个位置放的是最后一个元素
*/

//void translateArr(int* arr, int n) {
//	int start = arr[0];
//	int i = 0;
//	for (i = 0; i < n - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	arr[n - 1] = start;
//}
//void translateArr1(int* arr, int n) {
//	int end = arr[n-1];
//	int i = 0;
//	for (i = n-1; i > 0 ; i--) {
//		arr[i] = arr[i-1];
//	}
//	arr[0] = end;
//}
//int main() {
//	// 输入
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// 向前平移
//	translateArr(arr, 10);
//	// 输出
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	// 向后平移
//	translateArr1(arr, 10);
//	printf("\n");
//	// 输出
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//oj 654
// 输出1000以内的素数
// 厄拉多塞筛选法
//int main() {
//	int arr[1001] = { 0 };// 默认全部是素数
//	int i = 2;
//	for (i = 2; i <= 1000; i++) {
//		if (arr[i] == 0) {
//			printf("%d\n", i);
//			// 如果i是素数，那么i的倍数就一定不是素数
//			for (int j = i + i; j <= 1000; j += i) { 
//				arr[j] = 1; // 将i的倍数改为1，排除
//			}
//		}
//		
//	}
//	return 0;
//}


// OJ/1505
/*
输入n个整数,存放在数组a[1]至a[n]中，输出最大数所在位置(n≤1000)。
*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++) {
//		if (arr[i] >= max) {
//			max = arr[i];
//			ret = i;
//		}
//	}
//	printf("%d", ret + 1);
//	return 0;
//}

//// oj/1506 冒泡排序
//void bubble_sort(int arr[], int n) {
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n - 1; i++) {
//		// 第一趟排序
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++) {
//			if (arr[j] < arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	// 排序
//	bubble_sort(arr, n);
//
//	// 输出
//	for (i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// oj 1507
// 输出n以内的质素 n<1000
// 厄拉多塞筛选法 
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1001] = { 0 };// 默认全部是素数
//	int i = 2;
//	for (i = 2; i <= n; i++) {
//		if (arr[i] == 0) {
//			printf("%d\n", i);
//			// 如果i是素数，那么i的倍数就一定不是素数
//			for (int j = i + i; j <= 1000; j += i) { 
//				arr[j] = 1; // 将i的倍数改为1，排除
//			}
//		}
//		
//	}
//	return 0;
//}


// 1508
/*
Description
输出一个整数序列中与指定数字相同的数的个数。
Input
输入包含三行：
第一行为n，表示整数序列的长度(n≤100)；
第二行为n个整数，整数之间以一个空格分开；
第三行包含一个整数，为指定的数字m。
Output
输出为n个数中与m相同的数的个数
*/

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	int count = 0;
//	scanf("%d", &m);
//	for (i = 0; i < n; i++) {
//		if (arr[i]==m) {
//			count++;
//
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
// 

//// 交换两个变量
////1
//void Swap(int* a, int* b) {
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//// 2 
//void Swap2(int* a, int* b) {
//	
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//// 3 010   5 101
//// 010
//// 010 
//// 000 // 3 ^ 3 = 0
//// 
//// 000
//// 101 // 
//// 101 // 0 ^ 5 = 5
//// 
//// a ^ b = 
////
//
//void Swap3(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b; 
//	*a = *a ^ *b;
//
//}
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	// 交换
//	Swap3(&a, &b);
//	// 输出
//	printf("%d %d", a, b);
//}


// 1509 // 陶陶摘苹果
//int main() {
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (i = 0; i < 10; i++) {
//		if (arr[i]	<= n+30) {
//			count++;
//
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

// 1510 // 计算书费

//int main() {
//	float price[10] = { 28.9,32.7,45.6 ,78 ,35 , 86.2 ,27.8 ,43 ,56 ,65 };
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	float sum = 0.0;
//	for (i = 0; i < 10; i++) {
//		sum += arr[i]*price[i];
//	}
//	printf("%.1f", sum);
//
//	return 0;
//}

// 将一个数组逆序后输出
//void reverseArr(int arr[], int n) {
//	int left = 0;
//	int right = n-1;
//	int temp = 0;
//	while (left < right) {
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//
//	reverseArr(arr, n);
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//// oj/651 输入某年某月某日，判断这一天是这一年的第几天？
//int is_leapyear(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	int ret = is_leapyear(year);
//	int arr_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < month; i++) {
//		sum += arr_month[i];
//	}
//	printf("%d", sum + day + ret);
//	return 0;
//}

