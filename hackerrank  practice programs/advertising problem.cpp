#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,i,sum=0,temp=5;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum += floor(temp/2);
		temp = floor(temp/2)*3;
	}
	cout<<sum<<endl;
	
}
