//Cap phat dong mang 2 chieu (cach 1) (for long nhau)
#include <stdio.h>
#include <stdlib.h>

void input(int**,int,int);
void output(int**,int,int);

int main()
{
	int sodong,socot, **a;
	do
	{
		printf("Nhap so dong: ");
		scanf("%d",&sodong);
		printf("Nhap so cot: ");
		scanf("%d",&socot);
	} while (sodong<1 || socot<1);
	a = (int **)malloc(sodong*sizeof(int*));
	for (int i = 0; i<sodong;i++)
	{
		a[i] = (int*)malloc(socot*sizeof(int));
	}
	
	printf("===Nhap mang===\n");
	input(a,sodong,socot);
	printf("===Xuat mang===\n");
	output(a,sodong,socot);

	for(int i = 0;i<sodong;i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}

void input(int **a, int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void output(int **a,int n,int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}