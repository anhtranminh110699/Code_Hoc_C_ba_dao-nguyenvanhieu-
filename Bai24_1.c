//Tim so dao nguoc
#include <stdio.h>

int daonguoc(int);

int main()
{
	int n;
	//int a,re;
	//re = 0;
	printf("Nhap so n: ");
	scanf("%d",&n);
	/*while (n!=0) //ko the viet n/10!=0 o day vi dieu kien ko trong vong lap va no luon dung.
	{
		a = n%10;
		re = re * 10 + a;
		n = n/10;
	}
	printf("So %d sau khi dao nguoc la: %d\n",n,re);*/
	printf("So %d sau khi dao nguoc la: %d\n",n,daonguoc(n));
}

int daonguoc(int b)
{
	int a,re;
	re = 0;
	while (b!=0) //ko the viet n/10!=0 o day vi dieu kien ko trong vong lap va no luon dung.
	{
		a = b%10;
		re = re * 10 + a;
		b = b/10;
	}
	return re;
}