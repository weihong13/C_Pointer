#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



// 常量区： 常量 不能被修改 地址常量（数组名）
// 栈区：局部变量，形参

// 堆区


// 声明周期、作用域


// 利用动态数组 求n的累加和

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(sizeof(int) * n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//
//	printf("%d", sum);
//	free(arr);
//
//	return 0;
//}


// 全局变量 默认初始化为0
int a;
void test()
{
	
}
int main()
{


	printf("%d", a); // 局部变量未初始化，不能使用
	return 0;
}


//// oj 662
//char* my_strcat(char* str1, const char* str2)
//{
//    char* temp = str1;
//
//    while (*str1)
//    {
//        str1++;
//    }
//    while (*str2)
//    {
//        *str1++ = *str2++;
//    }
//    *str1 = '\0';
//    return temp;
//}
//
//int main()
//{
//    char str1[100] = { 0 };
//    char str2[100] = { 0 };
//    scanf("%s", str1);
//    scanf("%s", str2);
//
//    printf("%s",my_strcat(str1,str2));
//    
//    return 0;
//}


//// oj 668 atoi函数，主要功能是将一个字符串转变为整数，例如将“12345”–>12345
//#include<assert.h>
//int my_atoi(char* ch)
//{
//	if (ch == NULL)
//	{
//		// 传入空字符
//		return 0;
//	}
//	int s = 0;
//	int flag = 1;
//	while (*ch)
//	{
//		if (*ch == '-')
//		{
//			// 解决负号
//			flag = -1;
//			ch++;
//		}
//		if (*ch == '+')
//		{
//			ch++;
//		}
//		if (*ch >= '0' && *ch <= '9')
//		{
//			s = s*10 + (*ch++ - '0');
//
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	return s*flag;
//
//}
//
//int main() {
//	char ch[100] = { 0 };
//	int i = 0;
//	scanf("%s", ch);
//	int len = strlen(ch);
//
//	printf("%d", my_atoi(ch));
//
//	return 0;
//}