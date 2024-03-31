#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>

//// 逆序字符串
//void Reverse(char* str, int left, int right) {
//
//	char temp = 0;
//	while (left < right) {
//		temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//// 逆序单词
//void ReverseWord(char* str,int sz) {
//	char* star = str;
//	int left = 0;
//	int right = sz - 1;
//	// 逆序整个字符串
//	Reverse(str, left, right);
//	// 逆序单词
//	int end = 0;
//	while (str[end] != '\0') {
//		while (str[end] != ' ' && str[end] != '\0') {
//			end++;
//		}
//		Reverse(str, left, end-1);
//		left = end + 1;
//		end++;
//	}
//
//
//}
//
//// 字符串单词逆序输出
//int main() {
//	// 输入
//	char str[100] = { 0 };
//	gets(str);
//	int sz = strlen(str);
//	// 逆序单词
//	ReverseWord(str,sz);
//	// 输出
//	printf("%s", str);
//
//	return 0;
//}


//// 换行输出字符串单词
//int main() {
//	// 输入
//	char str[100] = { 0 };
//	int sz = 0;
//	//while (scanf("%c", str + sz) != EOF) {
//	//	sz++;
//	//}
//	gets(str);
//	int right = 0;
//	while (str[right] != '\0') {
//
//		while (str[right] == ' ') {
//			printf("\n");
//			right++;
//		}
//		printf("%c", str[right]);
//		right++;
//		
//	}
//
//	return 0;
//}


//// 输出字符出现的次数，并按照字母顺序表排序输出
//int main() {
//	// 输入
//	char ch[100] = { 0 };
//	scanf("%s", ch);
//
//	int word[26] = { 0 };
//	int count[26] = { 0 };
//	int i = 0;
//	for(i = 0; i < 26; i++){
//		word[i] = i + 97;
//	}
//	// 计数
//	char* str = ch;
//	int len = strlen(ch);
//	while (*str) {
//		for (i = 0; i < 26; i++) {
//			if (word[i] == *str) {
//				count[i]++;
//				break;
//			}
//		}
//		str++;
//	}
//
//	// 打印
//	for (i = 0; i < 26; i++) {
//		if (count[i] != 0) {
//			printf("%c%d", word[i], count[i]);
//		}
//	}
//
//	return 0;
//}



//int main() {
//	char ch[100] = { 0 };
//	int i = 0;
//	scanf("%s", ch);
//	int len = strlen(ch);
//	for (i = 0; i < len; i++) {
//		printf("%d", ch[i]-48);
//
//	}
//	return 0;
//}

//将一个变量的字符串复制到另外一个变量中。
//#include<string.h>
//int main() {
//	char arr[100] = { 0 };
//	char arr1[100] = { 0 };
//	scanf("%s", arr);
//	strcpy(arr1, arr);
//	printf("%s", arr1);
//	return 0;
//}

//int main() {
//	int h = 0;
//	scanf("%d", &h);
//	double sum = 0;
//	sum = ((double)h - 100) * 2 * 0.9;
//	printf("%.1lf", sum);
//	return 0;
//}

//// 和差积商
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	printf("%d + %d = %d\n", a,b,a+b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	return 0;
//}

//int my_strlen(const char* str) {
//	const char* end = str;
//	while (*end++);
//	return (end - str - 1);
//}
//int main() {
//	char str[100] = { 0 };
//	gets(str);
//	int len = my_strlen(str);
//	printf("%d", len);
//	return 0;
//}

// 蛇形填数 -- 未完成
int main() {
	int n = 0;
	int arr[20][20] = { 0 };
	scanf("%d", n);
	// 写入
	int r = 0;
	int c = 0;
	int row = n;
	int col = n;
	int num = 1;
	// 右面列
	for (r = 0; r < row; r++) {
		arr[r][col-1] = num;
		num++;
	}
	col -= 1;
	// 下面行
	for (c = col-1; c >= 0; c--) {
		arr[row-1][c] = num;
		num++;
	}
	row -= 1;
	// 左面列
	for (r = row-1; r >= 0; r--) {
		arr[r][0] = num;
		num++;
	}


	// 输出
	return 0;
}
