#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, n1, n2;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n1);
	p = (int *)malloc(n1*sizeof(int));
	printf("Dia chi vung nho vua cap phat: %u\n",p);

	printf("Nhap lai so luong phan tu: ");
	scanf("%d",&n2);
	p = realloc(p,n2);
	printf("Dia chi vung nho vua cap phat lai: %u\n",p);

	free(p);
	return 0;
}