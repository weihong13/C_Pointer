#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



// �������� ���� ���ܱ��޸� ��ַ��������������
// ջ�����ֲ��������β�

// ����


// �������ڡ�������


// ���ö�̬���� ��n���ۼӺ�

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


// ȫ�ֱ��� Ĭ�ϳ�ʼ��Ϊ0
int a;
void test()
{
	
}
int main()
{


	printf("%d", a); // �ֲ�����δ��ʼ��������ʹ��
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


//// oj 668 atoi��������Ҫ�����ǽ�һ���ַ���ת��Ϊ���������罫��12345���C>12345
//#include<assert.h>
//int my_atoi(char* ch)
//{
//	if (ch == NULL)
//	{
//		// ������ַ�
//		return 0;
//	}
//	int s = 0;
//	int flag = 1;
//	while (*ch)
//	{
//		if (*ch == '-')
//		{
//			// �������
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