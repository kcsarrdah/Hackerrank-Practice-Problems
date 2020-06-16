//minimum distances
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i =0; i<n; i++)
		cin>>a[i];
	vector <int> dists;
	for (int i = 0; i < n - 1; i++)
	{
		for(int j = 1;j < n; j ++)
		{
			if(a[i] == a[j] && i != j)
			{
				dists.push_back(abs(j - i));
				cout<<j - i<<endl;
			}
		}
	}
	if(dists.size()>0)
		cout<<*min_element(dists.begin(), dists.end())<<endl;
	else
		cout<<"-1"<<endl;
}

