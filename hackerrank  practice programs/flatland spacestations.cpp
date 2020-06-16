#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[m];
	
	for(int i = 0; i < m; i++)
		cin>>arr[i];
		
	sort(arr, arr+m);
	for(int i = 0; i < m; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	int dmax = 0;
	
	
	if (n == m)
		dmax = 0;
	else if(m == 1)
	{
		dmax = max((n-m),abs(0-m));
	}
	else 
	{
		vector <int> mindist;
		mindist.push_back(abs(0 - arr[0]));
		mindist.push_back(n-1 - arr[m-1]);
		
		for(int i = 0; i < m-1; i++)
			{
				mindist.push_back((abs(arr[i]-(arr[i+1])))/2);
			}
			dmax = *max_element(mindist.begin(), mindist.end());
			
		for(int i = 0; i < mindist.size(); i++)
			cout<<mindist[i]<<" ";
		cout<<endl;
	}
	cout<<dmax<<endl;
	
}
