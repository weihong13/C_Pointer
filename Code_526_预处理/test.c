#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




// 预处理

// 代码错误
// 1、编译错误
// 2、运行错误
// 
// 而在代码编译之前，会有一个预处理工作
// C 语言的 预处理器 就是一个文本替换工具
// 
// 所有的预处理命令都以  # 开头
// 
// #include 有两种导入库文件方式
// <> 标准库路径下开始检索----只包含系统自带的头文件
// "" 当前工作路径下开始检索---在工作路径下没找到的话，会搜索整个磁盘
// 
// 而自己定义的头文件，使用<> 引用，找不到
// #include<std.h> // error

#define NUM 10

#undef NUM // 取消宏定义

// 如果 NUM 宏定义不存在，执行里面的语句
#ifndef NUM 
#define NUM 10
#endif   // 结束

// 如果NUM 宏定义存在，执行某条语句
#ifdef NUM
 /* 执行某条语句*/
#endif



//int main()
//{
//	int NUM1 = 100;
//
//	printf("%d\n", NUM); // 在预处理阶段将NUM替换为10；
//
//	return 0;
//}

// 预定义宏----可以直接使用的宏，但是不能修改

#define __DATE__ // 描述当前日期
#define __TIME__ // 当前时间
#define __FILE__ // 文件名（字符串常量）
#define __LINE__ // 当前行号
#define __STDC__ // 以 ANSI 标准编译时，将其定义为1

//int main()
//{
//	int NUM1 = 100;
//
//	printf("%p\n", __DATE__);
//
//	printf("%d\n", NUM); // 在预处理阶段将NUM替换为10；
//
//	return 0;
//}


// 宏函数

#define MAX(a,b)\
		if(a > b){\
			printf("%d",a);\
		}else{\
			printf("%d",b);\
		}

// 字符串常量化运算符 --- #
// 在宏定义时，需要把宏函数的参数转化为字符串常量，使用 # 
//
#define DeBug(x,y) printf("%s 的值是 %d",#x,y)

int main() {

	DeBug(10, 10);

	return 0;
}

