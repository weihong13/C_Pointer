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
//	// 从左到右输出同一行格子位置
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", r, i);
//	}
//	printf("\n");
//	// 从上到下输出同一列格子位置；
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", i, c);
//	}
//	printf("\n");
//	int i = r;
//	int j = c;
//	// 从左上到右下输出同一对角线格子位置；
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
//	// 从左下到右上输出同一对角线格子位置。
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


// oj 1530 计算矩阵边缘元素之和
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
	// 加列
	for (int i = 0; i < n; i++)
	{
		sum += arr[0][i];
		sum += arr[m-1][i];

	}
	// 加行
	for (int i = 0; i < m; i++)
	{
		sum += arr[i][0];
		sum += arr[i][n-1];

	}
	arr[0][0];
	// 减去多算
	sum = sum - arr[0][0] - arr[0][n-1]-arr[m-1][0]-arr[m-1][n-1];
	printf("%d", sum);
	return 0;
}
 
