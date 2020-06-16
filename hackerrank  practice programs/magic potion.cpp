#include<iostream>
using namespace std;
int main()
{
	int n,k,i,j,temp=0,min_id;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		min_id=i;
		for (j = i+1; j < n; j++)
			if (arr[j] < arr[min_id])  
        		min_id = j;
		temp=arr[min_id];
		arr[min_id]=arr[i];
		arr[i]=temp;
	}
	int p_cnt;
	p_cnt= arr[n-1]-k;
	if(p_cnt>0)
		cout<<p_cnt;
	else
		cout<<"0"; 
}   

