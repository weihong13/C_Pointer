#include<stdio.h>

struct Student
{
	char name[20];
	int age;
}s1;


int main() 
{

	struct Student s;  // 局部变量，内部name数组未初始化
	s.name[0] = 'a';
	printf("%s", s.name); // 未初始化 遇到\0 才停止
	struct Student s1; // 全局变量，内部name 默认为0
	s1.name[0] = 'a'; 
	printf("%s", s1.name); // a ，有0
	return 0;
}

/*
找成员当中最大的类型 作为对齐数
按照定义的顺序实现空间的分配
实现地址分配的要整数倍地址对齐
当结构体当中成员为数组时 需要将数组拆分成多个该类型的变量，在进行空间分配
当结构体当中包含其他结构体类型的变量时 需要先找到他的对齐数 从而确定该结构体的对齐数


//位域
//如果相邻成员是同一类型 可以考虑往一个单位内进行分配，不允许跨单位进行存储
*/