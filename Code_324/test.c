#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// oj 650
/*
����һ��int�͵�һά���飬����10��Ԫ�أ��ֱ�ֵ
1)Ȼ�������е�Ԫ�ض���ǰ��һ��λ�ã����һ��λ�÷ŵ��ǵ�һ��Ԫ��
2)Ȼ�������е�Ԫ�ض������һ��λ�ã���һ��λ�÷ŵ������һ��Ԫ��
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
//	// ����
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// ��ǰƽ��
//	translateArr(arr, 10);
//	// ���
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	// ���ƽ��
//	translateArr1(arr, 10);
//	printf("\n");
//	// ���
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//oj 654
// ���1000���ڵ�����
// ��������ɸѡ��
//int main() {
//	int arr[1001] = { 0 };// Ĭ��ȫ��������
//	int i = 2;
//	for (i = 2; i <= 1000; i++) {
//		if (arr[i] == 0) {
//			printf("%d\n", i);
//			// ���i����������ôi�ı�����һ����������
//			for (int j = i + i; j <= 1000; j += i) { 
//				arr[j] = 1; // ��i�ı�����Ϊ1���ų�
//			}
//		}
//		
//	}
//	return 0;
//}


// OJ/1505
/*
����n������,���������a[1]��a[n]�У�������������λ��(n��1000)��
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

//// oj/1506 ð������
//void bubble_sort(int arr[], int n) {
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n - 1; i++) {
//		// ��һ������
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
//	// ����
//	bubble_sort(arr, n);
//
//	// ���
//	for (i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// oj 1507
// ���n���ڵ����� n<1000
// ��������ɸѡ�� 
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1001] = { 0 };// Ĭ��ȫ��������
//	int i = 2;
//	for (i = 2; i <= n; i++) {
//		if (arr[i] == 0) {
//			printf("%d\n", i);
//			// ���i����������ôi�ı�����һ����������
//			for (int j = i + i; j <= 1000; j += i) { 
//				arr[j] = 1; // ��i�ı�����Ϊ1���ų�
//			}
//		}
//		
//	}
//	return 0;
//}


// 1508
/*
Description
���һ��������������ָ��������ͬ�����ĸ�����
Input
����������У�
��һ��Ϊn����ʾ�������еĳ���(n��100)��
�ڶ���Ϊn������������֮����һ���ո�ֿ���
�����а���һ��������Ϊָ��������m��
Output
���Ϊn��������m��ͬ�����ĸ���
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

//// ������������
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
//	// ����
//	Swap3(&a, &b);
//	// ���
//	printf("%d %d", a, b);
//}


// 1509 // ����ժƻ��
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

// 1510 // �������

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

// ��һ��������������
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


//// oj/651 ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
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

