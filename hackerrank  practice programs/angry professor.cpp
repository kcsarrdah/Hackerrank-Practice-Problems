#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;


	
	while(t)
	{
		int n,k,i,flag = 0;
		cin>>n>>k;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++)
		{
			if(arr[i]<=0)
				flag++;
		}
		if(flag>=k)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		t--;
	}
}
