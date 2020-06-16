#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	
	int freq[100] = {0};
	for(int i = 0; i < n; i++)
	{
		freq[arr[i]] ++;
	}
	int max= 0;
	for(int i = 0; i < 100; i++)
	{
		if(freq[i] >= max)
			max =freq[i];
	}

	cout<<n - max;
}
