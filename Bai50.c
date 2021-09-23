//Thuat toan tim kiem nhi phan
#include <stdio.h>

//Ham tim kiem nhi phan su dung giai thuat de quy
int binarySearch(int arr[],int l,int r, int x)
{
	if (r>=1)
	{
		int mid = l + (r-l) / 2;

		//Neu arr[mid] = x, tra ve chi so va ket thuc
		if (arr[mid] == x)
		{
			return mid;
		}

		//Neu arr[mid] > x, thuc hien tim kiem nua trai
		if (arr[mid] > x)
		{
			return binarySearch(arr,l,mid-1,x);
		}

		//Neu arr[mid] < x, thuc hien tim kiem nua phai
		{
			return binarySearch(arr,mid+1,r,x);
		}
	}

	//Neu khong tim thay
	return -1;
}

int main()
{
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr,0,n-1,x);
	if (result == -1)
		printf("%d xuat hien tai chi so %d.\n",x,result);
	else
		printf("%d xuat hien tai chi so %d.\n",x,result);
	return 0;
}