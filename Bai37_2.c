//Bai tap doi so nhi phan sang thap phan

/*#include <stdio.h>
#include <math.h>

int demsobin(int);
int bintodec(int,int);

int main()
{
	int n,dem;
	printf("Nhap so n: ");
	scanf("%d",&n);
	dem = demsobin(n);
	//printf("%d\n",dem);
	printf("So n sau khi chuyen sang thap phan la: %d\n",bintodec(n,dem));
}

int demsobin(int bin)
{
	int dem;
	dem = 0;
	while(bin>0)
	{
		dem++;
		bin/=10;
	}
	return dem;
}

int bintodec(int n, int dem)
{
	int i,sum,a,b;
	sum = 0;
	for (i=(dem-1);i>=0;i--)
	{
		b = n/pow(10,i);
		sum = sum + (b*pow(2,i));
		a = n/pow(10,i);
		n = n - (a*pow(10,i));
	}
	return sum;
}*/

#include <stdio.h>
#include <math.h>
 
int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}
 
int main()
{
    long long binaryNumber;
    printf("\nNhap so nhi phan: ");
    scanf("%lld", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
}