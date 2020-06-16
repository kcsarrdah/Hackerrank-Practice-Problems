#include<iostream>
using namespace std;
int main()
{
    int n,i;
	cin>>n;
		
    long long int a[n],s=0;
	
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    cout<<s;
}

