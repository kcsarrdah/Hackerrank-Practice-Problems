#include <iostream>
using namespace std;
int main()
{
	int n,i,sum=0,stpos=0,flag=0;
	cin>>n;
	int  arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int d,m;
	cin>>d>>m;
	for(i=0;i<m;i++)
	{
		sum=0;
		sum += arr[stpos + i];
		stpos++;
		if(sum == d)
			flag++;
	}
	cout<<flag;
}
