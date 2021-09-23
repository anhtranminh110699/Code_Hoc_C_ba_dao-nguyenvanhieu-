#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,**c, a;
	a = 10;
	p = &a;
	//**c = &a;
	printf("dia chi a: %x.\n",&a);
	printf("%x\n",p);
	printf("gia tri cua a: %d.\n",a);
	printf("%d\n",*p);

	c = &p;
	printf("%x\n",&p);
	printf("%x\n",c);
	printf("%x\n",p);
	printf("%x\n",*c);
	printf("\n\n");

	printf("%d\n",**c);
}