#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	
	int mid = n/2;
	cout<<mid;
	int turns = 0;
	if (p<=mid)
	{
		int i =1;
		while(i <= p)
		{	
			turns += 1;
			i += 2;
		}
		cout<<turns<<endl;

	}
	else
	{
		int i = n;
		while (i >= p)
		{
			 turns += 1;
			 i -= 2;
		}
		cout<<turns<<endl;
	}
}
