#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
// 
typedef struct Student

{
	int num;
	char name[20];
	float score[3];
	double aver;
}Student;

int main()
{
	Student* stu = NULL;
	int n = 0;
	scanf("%d", &n);
	stu = (Student*)malloc(n * sizeof(Student));
	if (stu == NULL)
	{
		return -1;
	}

	int temp = 0;
	float div = 0;
	float max = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d %s %f %f %f", 
			&stu[i].num, stu[i].name, 
			&stu[i].score[0], 
			&stu[i].score[1], 
			&stu[i].score[2]);
		div = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2])/3;
		stu[i].aver = div;
		if (max <= div)
		{
			max = div;
			temp = i;
		}
	}
	
	printf("学号：%d 姓名：%s 成绩：%.2f %.2f %.2f 平均分：%.2lf\n", stu[temp].num, stu[temp].name, stu[temp].score[0], stu[temp].score[1], stu[temp].score[2], stu[temp].aver);
	
	return 0;
}