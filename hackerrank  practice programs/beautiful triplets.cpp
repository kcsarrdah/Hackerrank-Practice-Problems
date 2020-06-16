//beautiful triplets
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	int count = 0;
	for(int i = 0;i < n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	for(int i = 0;i < n; i++)
	{
		for(int j = i+1;j < n; j++)
		{
			if(arr[i]+d == arr[j])
			{
				for(int k = j+1; k < n; k++)
				{
					if(arr[j]+d == arr[k])
						count++;
				}
			}
		}
	}
	cout<<count<<endl;
	
}
