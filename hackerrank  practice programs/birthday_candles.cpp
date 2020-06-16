#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	int i;
	for(i=0;i<=n-1;i++)
	cin>>a[i];
	long long int lar_val=a[0],bl_count=0;
	int k,j;
	for(i=1;i<=n;i++)
	{
		if (lar_val<a[i])
		lar_val=a[i];
	}
	for(j=0;j<=n;j++)s
	{
		if (a[j]==lar_val)
		bl_count++;
	}
	cout<<bl_count<<endl;
	return 0;
}
