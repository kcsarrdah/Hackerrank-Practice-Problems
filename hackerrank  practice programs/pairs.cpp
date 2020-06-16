//pairs
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	lli k;
	cin>>n>>k;
	lli arr[n];
	for(int i=0; i < n; i++)
		cin>>arr[i];
    sort(arr, arr+n);
	int flag = 0;
	for(int i = 0; i < n -1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(abs(arr[i] - arr[j]) == k)
			{
				flag++;
			}
		}	
	}
	cout<<flag<<endl;
	
}
