#include<iostream>
using namespace std;
int main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int kb[n],usb[m];
	for (int i = 0; i<n; i++)
		cin>>kb[i];
	for (int i = 0; i<m; i++)
		cin>>usb[i];
	int max = -1;
	for(int i =0; i < n; i++)
	{
		for (int j = 0;j < m; j++)
		{

			if (kb[i]+usb[j] <= b && kb[i]+usb[j] >= max)
			{
				max = kb[i]+usb[j];
			}
		}
	}
	cout<<max<<endl; 
	return 0;
}
