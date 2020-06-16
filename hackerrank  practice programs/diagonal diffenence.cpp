#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n],i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int pd=0,sd=0,dd;
		for(i = 0; i < n; ++i)
		{
			for(j = 0; j < n; ++j)
			{
				if (i==j)
				pd += arr[i][j];
			}	
		}
		for(i=0;i<n;i++)
		{
			sd += arr[n-i-1][i];
		}
		
		dd= pd-sd;
		if (dd<0)
			dd=dd*(-1);
		cout<<dd;

}
