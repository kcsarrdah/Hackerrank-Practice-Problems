#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[1000];
	int i;
	for(i=0;i<=n-1;i++);
	{
		cin>>a[i];
	}
	int j,sum=0;
	for (j=0;j<=n-1;j++)
	{
		sum=sum+a[j];
	}
	cout<<sum<<endl;
	return 0;
}
