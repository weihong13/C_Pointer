#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//printf("1\n");
	//printf("0\n");
	//printf(" \n");
	//printf("\\\n");
	//printf("'\n");
	//printf("\"\n");
	//printf("\%%\n");
	//return 0;
	//int a, b;
	//scanf("%d", &a);
	//scanf("%d", &b);
	//
	//
	//if (b == 0) {
	//	printf("none");
	//}
	//else {
	//	printf("%d %d", a / b, a % b);
	//}
	//return 0;
	//float a, b, temp;
	//scanf("%f",&a);
	//scanf("%f",&b);
	//temp = a;
	//a = b;
	//b = temp;
	//printf("%.1f %.1f", a, b);

	//return 0;

	// 
	//int i;
	//for (i=1;i<=10;i++) {
	//	if (i%2 == 1) {
	//		printf("%d\n",i);
	//	}
	//	
	//}
	//return 0;


		//指针变量中放的是谁的地址，*指针变量就是谁
		int a = 10;
		int b = 20;
		int* pa = &a;
		int* pb = &b;
		*pb = a;
		*pa = b;
		printf("%d ", a);
		printf("%d ", b);
		printf("%d ", *pa);
		printf("%d ", *pb);
		*pb = *pa;
		a = 8;
		pb = pa;
		printf("%d ", a);
		printf("%d ", b);
		printf("%d ", *pa);
		printf("%d ", *pb);
		pb = &a;
		pa = &b;
		a = 5;
		*pb = a;
		printf("%d ", a);
		printf("%d ", b);
		printf("%d ", *pa);
		printf("%d ", *pb);
		return 0;
	

}