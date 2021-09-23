//Them va xoa phan tu trong mang mot chieu (cap phat dong)
#include <stdio.h>
#include <stdlib.h>

void input(int*,int*);
void output(int*,int*);
void themphantu(int*,int*,int,int);
void xoaphantu(int*,int*,int);

int main()
{
	int n,*p;
	printf("So phan tu ban dau cua mang: ");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));

	printf("===Nhap mang===\n");
	input(p,&n);
	printf("===Xuat mang===\n");
	output(p,&n);
	//printf("%d\n",n);

	printf("===Them phan tu vao mang===\n");
	int val,pos1;
	printf("Nhap gia tri phan tu muon them vao: ");
	scanf("%d",&val);
	printf("Nhap vi tri phan tu muon them vao: ");
	scanf("%d",&pos1);
	themphantu(p,&n,val,pos1);
	//printf("%d\n",n);
	printf("Mang sau khi chen: \n");
	output(p,&n);
	//printf("%d\n",n);

	printf("===Xoa phan tu khoi mang===\n");
	int pos2;
	printf("Nhap vi tri phan tu muon xoa: ");
	scanf("%d",&pos2);
	xoaphantu(p,&n,pos2);
	//printf("%d\n",n);
	printf("Mang sau khi xoa: \n");
	output(p,&n);
	//printf("%d\n",n);
}

void input(int *a,int *n)
{
	for (int i=0;i<*n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",(a+i));
	}
}

void output(int *a,int *n)
{
	for (int i = 0;i<*n;i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}

void themphantu(int *a,int *n,int val,int pos)
{
	a = (int*)realloc(a,(*n+1)*sizeof(int));
	if (pos<0)
	{
		pos = 0;
	}
	else if (pos>*n)
	{
		pos = *n;
	}

	for (int i=*n;i>pos;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*(a+pos)=val;
	++*n;
}

void xoaphantu(int *a,int *n,int pos)
{
	if (pos<0)
	{
		pos = 0;
	}
	else if (pos > *n)
	{
		pos = *n-1;
	}
	for (int i=pos;i<*n;i++)
	{
		*(a+i)=*(a+i+1);
	}
	a = (int*)realloc(a,(*n-1)*sizeof(int));
	--*n;
}