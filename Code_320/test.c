#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void printArray(int* arry, int sz) { // �˻�Ϊָ�룬 int arry[] == int* arry
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d", arry[i]);  // arry[i] == *(arry+1)
//	}
//
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printArray(arr, sz);
//
//	return 0;
//}



//// ϴ���㷨 
//#include<stdlib.h>
//#include<time.h>
//
//void printArray(int* arry, int sz) { // �˻�Ϊָ�룬 int arry[] == int* arry
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arry[i]);  // arry[i] == *(arry+1)
//	}
//
//}
//int main() {
//	// �����������
//	srand((unsigned int)time(NULL));
//
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int r = 0;
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < 11; i++) {
//		r = rand() % 11 ;
//		temp = arr[r];
//		arr[r] = arr[i];
//		arr[i] = temp;
//	}
//	printArray(arr,11);
//	return 0;
//
//}

//#include<string.h>
//int main() {
//	char* p = "\\\a\0\n\012a0";
//	printf("%zu\n", sizeof(p)); // p ��ָ�����
//	printf("%zu\n", sizeof("\\\a\0\n\012a0")); // 8���ַ� \\  \a  \0  \n \012  a  0
//	printf("%d\n", strlen("\\\a\0\n\012a0")); // strlen() ���ַ������ȣ�����\0 ��ֹͣ	
//	return 0;
//}


// ������--�ڴ��д洢����������

//int main() {
//	char ch[10] = "abcdef"; // char ch[10] = {'a','b','c','d','e','f','\0'}; 
//	char* p = "abcdef";
//
//	//// ch++; //err
//	//p++; // b�ĵ�ַ
//	//// *ch++; // err * ++ ����++ ����*
//	//*p++; //  b
//	//(*ch)++; // b
//	//// (*p)++; // �Գ������� a ���и��ģ����������ܸ��ģ������ǲ��Ե�
//	return 0;
//}


// const
// const ��* ��ָ����������޸ģ����Ǵ�������� �����޸ģ�
// ���ڸú�����������ַ������ȣ��Ϳ��Ժܺõ����ƣ���������ַ������޸�
//unsigned int my_strlen(char const* str) {  
//	char a = 'a';
//	char b = 'b';
//	const char* pa = &a;
//	pa = &b;
//	// *pa = 'b' //err ,const ��*  �� ָ��pa�����޸ģ����� *pa �����޸�
//
//	char* const pb = &a;  // const * �ң� pb�������޸ģ� *pb �����޸�
//	// pb = &b;  // err
//	*pb = 'a';
//}
//int main() {
//	char ch = "abcdefg";
//	unsigned int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}