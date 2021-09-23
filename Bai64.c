//Moi quan he cua con tro va mang
#include <stdio.h>

int main()
{
	int a[100];
	int n;
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&n);
	} while (n<1);

	//Nhap mang
	for (int i=0;i<n;i++)
	{
		printf("Nhap a[%d] = ",i);
		scanf("%d",a+i);
	}

	//Xuat mang
	for (int i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
}