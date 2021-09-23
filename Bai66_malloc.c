#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *p, sum = 0;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));

	if (p == NULL)
	{
		printf("Co loi! khong the cap phat bo nho.\n");
		exit(0);
	}

	printf("Nhap cac gia tri: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",p+i);
		sum += *(p+i);
	}

	printf("Tong = %d.\n",sum);

	free(p);
	return 0;
}