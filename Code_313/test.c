#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	int n = 0;
//	int* p = &n; // ����ָ��ʱ������*���Ǽ���ָ�룬һ��ָ��������ַ
//	int** pa = &p; // ����ָ��� һ��ָ��ĵ�ַ 
//	// *pa = p = &n
//	// **pa = *p = n
//	return 0;
//}

// if ���
//// OJ / 606
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b) 
//	{
//		if (b >= c) 
//		{
//			printf("%d", a);
//		}
//		else 
//		{
//			if (c > a) 
//			{
//				printf("%d", c);
//			}
//		}
//	}
//	else 
//	{
//		if (b > c) 
//		{
//			printf("%d", b);
//		}
//		else 
//		{
//			printf("%d", c);
//		}
//	}
//	return 0;
//}

////// OJ / 606
//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	// ʹ��else if �Ļ���һ�� ��һ����������������������ж��ˣ������ظ�ִ��
//	if (a >= b && a >= c) { // a ���
//		printf("%d", a);
//	}
//	else if (b >= a && b >= c) { // b ���
//		printf("%d", b);
//	}
//	else if (c >= a && c >= b) {  // c ���
//		printf("%d", c);
//	}
//	return 0;
//}

// OJ/610
/*
Input
���뵱ǰʱ�䣺19ʱ17��59��
Output
���ʱ���ǣ�19ʱ18��0��*/
//int main() {
//	int hour = 0;
//	int minute = 0;
//	int second = 0;
//	scanf("%d%d%d", &hour, &minute, &second);
//	// �����һ
//	second += 1;
//	// �ж����Ƿ��λ
//	if (60 == second) {
//		// ���λ�󣬷ּ�һ
//		minute ++;
//		// �������
//		second = 0;
//		// �жϷ��Ƿ��λ
//		if (60 == minute) {
//			// �ֽ�λ��ʱ��һ
//			hour++;
//			// �ֹ���
//			minute = 0;
//			// �ж� Сʱ �Ƿ��λ
//			if (24 == hour) {
//				// ��λֱ�ӱ�Ϊ0
//				hour=0;
//			}
//		}
//	}
//	printf("%dʱ%d��%d��", hour, minute, second);
//	return 0;
//}

// OJ/605 ����1-7�ֱ��Ӧ����һ�������գ�����һ���������Ӧ��ӡ���ڼ�(ʹ��if)
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	if (1 == i) {
//		printf("����һ");
//	}
//	else if (2 == i) {
//		printf("���ڶ�");
//	}
//	else if (3 == i) {
//		printf("������");
//	}
//	else if (4 == i) {
//		printf("������");
//	}
//	else if (5 == i) {
//		printf("������");
//	}
//	else if (6 == i) {
//		printf("������");
//	}
//	else if (7 == i) {
//		printf("������");
//	}
//	return 0;
//}

//// OJ/605 ����1-7�ֱ��Ӧ����һ�������գ�����һ���������Ӧ��ӡ���ڼ�(ʹ��switch)
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		case 1:
//			printf("����һ");
//			break;
//		case 2:
//			printf("���ڶ�");
//			break;
//		case 3:
//			printf("������");
//			break;
//		case 4:
//			printf("������");
//			break;
//		case 5:
//			printf("������");
//			break;
//		case 6:
//			printf("������");
//			break;
//		case 7:
//			printf("������");
//			break;
//	}
//	return 0;
//}