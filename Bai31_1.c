//Bai tap dao nguoc so (su dung ham)
#include <stdio.h>

int daonguoc(int); 

int main()
{
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("So n sau khi dao nguoc la: %d\n",daonguoc(n));
}

int daonguoc(int c)
{
	int a,re;
	re=0;
	while(c>0)
	{
		a = c%10;
		re = re*10+a;
		c=c/10;
	}
	return re;
}