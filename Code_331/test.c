#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>

//// �����ַ���
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
//// ���򵥴�
//void ReverseWord(char* str,int sz) {
//	char* star = str;
//	int left = 0;
//	int right = sz - 1;
//	// ���������ַ���
//	Reverse(str, left, right);
//	// ���򵥴�
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
//// �ַ��������������
//int main() {
//	// ����
//	char str[100] = { 0 };
//	gets(str);
//	int sz = strlen(str);
//	// ���򵥴�
//	ReverseWord(str,sz);
//	// ���
//	printf("%s", str);
//
//	return 0;
//}


//// ��������ַ�������
//int main() {
//	// ����
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


//// ����ַ����ֵĴ�������������ĸ˳����������
//int main() {
//	// ����
//	char ch[100] = { 0 };
//	scanf("%s", ch);
//
//	int word[26] = { 0 };
//	int count[26] = { 0 };
//	int i = 0;
//	for(i = 0; i < 26; i++){
//		word[i] = i + 97;
//	}
//	// ����
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
//	// ��ӡ
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

//��һ���������ַ������Ƶ�����һ�������С�
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

//// �Ͳ����
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

// �������� -- δ���
int main() {
	int n = 0;
	int arr[20][20] = { 0 };
	scanf("%d", n);
	// д��
	int r = 0;
	int c = 0;
	int row = n;
	int col = n;
	int num = 1;
	// ������
	for (r = 0; r < row; r++) {
		arr[r][col-1] = num;
		num++;
	}
	col -= 1;
	// ������
	for (c = col-1; c >= 0; c--) {
		arr[row-1][c] = num;
		num++;
	}
	row -= 1;
	// ������
	for (r = row-1; r >= 0; r--) {
		arr[r][0] = num;
		num++;
	}


	// ���
	return 0;
}
