//big sorting
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double arr[n];
	for (int i = 0;i < n; i++)
		cin>>arr[i];
		
	sort(arr, arr+n);
	cout<<fixed<<setprecision(0)<<endl;
	for (int i = 0;i < n; i++)
		cout<<arr[i]<<endl;
		
	
}

