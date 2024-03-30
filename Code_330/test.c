#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//void cmp(int* a, int* b, int* c) {
//	int max = 0;
//	int mid = 0;
//	int min = 0;
//	int temp = 0;
//	if (*a >= *b && *a >= *c) {
//		if (*c < *b) {
//			temp = *c;
//			* c = *a;
//			*a = temp;
//		}
//		else {
//			temp = *c;
//			*c = *a;
//			*a = *b;
//			*b = temp;
//		}
//	}
//	else if (*b >= *a  && *b >= *c) {
//		if (*a > *c) {
//			temp = *a;
//			*a = *c;
//			*c = *b;
//			*b = temp;
//		}
//		else {
//			temp = *b;
//			*b = *c;
//			*c = temp;
//			
//		}
//	}
//	else {
//		if (*a >= *b) {
//			temp = *a;
//			*a = *b;
//			*b = temp;
//		}
//	}
//}
//
//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	cmp(&a, &b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

// 请输入矩阵(3 * 3)： 求对角线之和

//int main() {
//	int arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			if (i == j) {
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//// 计算字符串长度
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str) {
//		str++;
//		count++;
//	}
//	return count;
//}
//int main() {
//	char ch[100] = { 0 };
//	scanf("%s", ch);
//
//	int ret = my_strlen(ch);
//	printf("%d", ret);
//	return 0;
//}

////查找数组中最大和最小的元素值。
//int main() {
//	int arr[100] = {0};
//	int sz = 0;
//	int max = 0;
//	int min = 0;
//	while (scanf("%d",&arr[sz])!=EOF) {
//		sz++;
//
//	}
//	min = arr[0];
//	int i = 0;
//
//	for (i = 0; i < sz; i++) {
//	if (arr[i] >= max) {
//		max = arr[i];
//	}
//	}
//	for (i = 0; i < sz; i++) {
//		if (arr[i] <= min) {
//			min = arr[i];
//		}
//	}
//	printf("%d %d", max, min);
//
//
//	return 0;
//}


////数组拆分  将一个数组拆分成奇数数组和偶数数组。
//int main() {
//	int arr[100] = { 0 };
//	int arr1[50] = { 0 };
//	int arr2[50] = { 0 };
//	int sz = 0;
//	while (scanf("%d",&arr[sz]) != EOF) {
//		sz++;
//	}
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0) {
//			arr2[j] = arr[i];
//			j++;
//		}
//		else {
//			arr1[k] = arr[i];
//			k++;
//		}
//	}
//	for (i = 0; i < k; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < j; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


// 洗牌算法
//#include<stdlib.h>
//#include<time.h>
//void Shuffle(int arr[], int n) {
//
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int r = rand() % n;
//		temp = arr[r];
//		arr[r] = arr[i];
//		arr[i] = temp;
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// 打乱
//	Shuffle(arr, n);
//
//	// 输出
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


// 当字符串完全相同时输出0。不完全相同时，比较对应位置不同字符的ASCII值，前者大于后者输出1反之输出-1。
//int my_strcmp(char* ch, char* ch1) {
//	int i = 0;
//	while (*ch && *ch1 && *ch == *ch1) {
//		ch++;
//		ch1++;
//	}
//	if (*ch > *ch1) {
//		return 1;
//	}
//	else if (*ch < *ch1){
//		return -1;
//	}
//	if (*ch == '\0' && *ch1 != '\0') {
//		return 1;
//	}
//	else if (*ch1 == '\0' && *ch != '\0') {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//
//}
//int main() {
//
//	char ch[100] = { 0 };
//	char ch1[100] = { 0 };
//	scanf("%s", ch);
//	scanf("%s", ch1);
//	printf("%d",my_strcmp(ch, ch1));
//	return 0;
//}

// 127
// 0111 1111
// 1100 1000
//0001 0100 0111
// 
//  0111 1111 
//  0000 0001
//  1000 0000
//  1111 1111 1111 1111 1111 1111 1000 0000
//  1000 0000 0000 0000 0000 0000 0111 1111
//  1000 0000 0000 0000 0000 0000 1000 0000
//  
//  
//



//输入一字符串，输出转化为小写的字符串，不是字母的不用管
void my_tolower(char* str)
{
	char* star = str;
	while (*str) {
		if (*str >= 65 && *str <= 96) {
			(*str) = (*str) + 32;
		}
		str++;
	}
}
int main() {
	char ch[100] = { 0 };
	scanf("%s", ch);
	my_tolower(ch);
	printf("%s", ch);

	return 0;
}










