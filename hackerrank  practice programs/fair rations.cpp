#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum = 0,count = 0;
	for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum += arr[i];
		}
		
	if (sum%2 == 1)
		cout<<"NO";
	
	else 
	{
		for (int i = 0; i < n-1; i++)	
		{
			if(arr[i]%2 != 0)
				{
					arr[i]++;
                    arr[i+1]++;
					count += 2;
				}
		}
		cout<<count<<endl;
	}

}

