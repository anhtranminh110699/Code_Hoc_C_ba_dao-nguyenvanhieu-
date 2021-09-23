#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *p, sum = 0;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	p = (int*)calloc(n,sizeof(int));

	printf("%d\n",p);

	if(p == NULL)
	{
		printf("ERROR! Khong th cap phat bo nho dong.\n");
		exit(0);
	}
	//free(p);
	/*sở sẽ thu lại quyền sử dụng đất của anh, thế là đủ rồi,
	sở ko cần phải động chạm sửa chữa lại gì vùng đất đó.
	Nên khi đó dù vùng đất đó đã được giải phóng nhưng mà hoa màu của a ta trên đó thì vẫn còn,
	ko có biến mất được*/

	printf("%d\n",p);

	printf("Nhap so lieu mang: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		sum += *(p+i);
	}

	printf("%d\n",p);

	//printf("Tong = %d.\n",sum);
	free(p);
	printf("Tong = %d.\n",sum);
}