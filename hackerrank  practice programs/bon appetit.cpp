#include <iostream>
using namespace std;
int main()
{
	int n,k,i,sum=0;
	cin>>n>>k;
	int bill[n];
	for(i=0;i<n;i++)
	{
		cin>>bill[i];
	}
	bill[k]==0;
	int amount;
	cin>>amount;
	for (i=1;i<n;i++)
	{
		sum += bill[i];
	}
	if (sum/2 == amount)
		cout<<"Bon Appetit";
	else 
		cout<<amount-sum;
	
}
