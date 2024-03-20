#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void printArray(int* arry, int sz) { // 退化为指针， int arry[] == int* arry
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



//// 洗牌算法 
//#include<stdlib.h>
//#include<time.h>
//
//void printArray(int* arry, int sz) { // 退化为指针， int arry[] == int* arry
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arry[i]);  // arry[i] == *(arry+1)
//	}
//
//}
//int main() {
//	// 设置随机种子
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
//	printf("%zu\n", sizeof(p)); // p 是指针变量
//	printf("%zu\n", sizeof("\\\a\0\n\012a0")); // 8个字符 \\  \a  \0  \n \012  a  0
//	printf("%d\n", strlen("\\\a\0\n\012a0")); // strlen() 求字符串长度，遇到\0 就停止	
//	return 0;
//}


// 常量区--内存中存储常量的区域

//int main() {
//	char ch[10] = "abcdef"; // char ch[10] = {'a','b','c','d','e','f','\0'}; 
//	char* p = "abcdef";
//
//	//// ch++; //err
//	//p++; // b的地址
//	//// *ch++; // err * ++ 先算++ 再算*
//	//*p++; //  b
//	//(*ch)++; // b
//	//// (*p)++; // 对常量区的 a 进行更改，常量区不能更改，所以是不对的
//	return 0;
//}


// const
// const 在* 左，指针变量可以修改，但是传入的内容 不能修改，
// 由于该函数是求传入的字符串长度，就可以很好的限制，被传入的字符串被修改
//unsigned int my_strlen(char const* str) {  
//	char a = 'a';
//	char b = 'b';
//	const char* pa = &a;
//	pa = &b;
//	// *pa = 'b' //err ,const 在*  左， 指针pa可以修改，但是 *pa 不能修改
//
//	char* const pb = &a;  // const * 右， pb不可以修改， *pb 不能修改
//	// pb = &b;  // err
//	*pb = 'a';
//}
//int main() {
//	char ch = "abcdefg";
//	unsigned int len = my_strlen(ch);
//	printf("%d", len);
//	return 0;
//}