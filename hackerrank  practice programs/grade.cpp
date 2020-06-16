#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],farr[n];
	int i,j,temp=0,temp1=0;
	int clmul=0;
		
	for (i=0;i<n;i++)
		cin>>arr[i];
	
	for (i=0;i<n;i++)
	{
		temp = arr[i];
		clmul=0;
		for (j=0;j<n;j++)
		{
			temp1 = arr[i];
			for (i=0;i<5;i++)
			{
				temp1 += i;
				if(temp1%5 == 0)
				break;
			}
		}
		clmul = temp1;
		if (clmul - temp < 3)
			farr[i]=clmul;
		else
			farr[i]=temp;	
	}
	for (i=0;i<n;i++)
		cout<<farr[i]<<" ";
}
