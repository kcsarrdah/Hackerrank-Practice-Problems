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
    int matches = 0;
	int i = 0;
    int j = 1;
    while (j < n) 
	{
        int diff = arr[j] - arr[i];
            
		if (diff == k) 
		{
            matches++;
            j++;
        } 
		else if (diff > k) 
		{
        	i++;
            if (i == j) 
			{
                j++;
            }
        }
		else if (diff < k) 
		{
                j++;
        }
    }
	cout<<matches<<endl;
	
}
