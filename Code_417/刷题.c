#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// oj 1529
//int main()
//{
//	int n = 0;
//	int r = 0;
//	int c = 0;
//	scanf("%d%d%d", &n, &r, &c);
//
//	// ���������ͬһ�и���λ��
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", r, i);
//	}
//	printf("\n");
//	// ���ϵ������ͬһ�и���λ�ã�
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", i, c);
//	}
//	printf("\n");
//	int i = r;
//	int j = c;
//	// �����ϵ��������ͬһ�Խ��߸���λ�ã�
//	while ((i != 1) && (j != 1))
//	{
//		i--;
//		j--;
//	}
//	while ((i != n) && (j!=n))
//	{
//		printf("(%d,%d) ", i++, j++);
//
//	}
//	printf("(%d,%d) ", i, j);
//	printf("\n");
//	// �����µ��������ͬһ�Խ��߸���λ�á�
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i + j == r + c)
//			{
//				printf("(%d,%d) ", i, j);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}


// oj 1530 ��������ԵԪ��֮��
int arr[100][100] = { 0 };
int main()
{
	int m = 0;
	int n = 0;
	
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	// ����
	for (int i = 0; i < n; i++)
	{
		sum += arr[0][i];
		sum += arr[m-1][i];

	}
	// ����
	for (int i = 0; i < m; i++)
	{
		sum += arr[i][0];
		sum += arr[i][n-1];

	}
	arr[0][0];
	// ��ȥ����
	sum = sum - arr[0][0] - arr[0][n-1]-arr[m-1][0]-arr[m-1][n-1];
	printf("%d", sum);
	return 0;
}
 
