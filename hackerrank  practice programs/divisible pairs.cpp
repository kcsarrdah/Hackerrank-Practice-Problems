//divisible sum pairs
#import<iostream>
using namespace std;
int main()
{
	int n,k,i,j,flag = 0;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
		
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
			if((arr[i] + arr[j])%k == 0)
				flag++;
			}
		}
	}
	cout<<flag;
}
