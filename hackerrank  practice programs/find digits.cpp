//Find Digits
#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0,temp=0,temp1=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		temp=a[i];
		while(temp  )
		{
			temp1 = temp%10;
			temp /= 10;
			if( temp !=0 &&(temp1%temp == 0))
				flag++;
		}
		cout<<flag<<endl;
		flag=0;
	}
}
