#include<iostream>
using namespace std;
int main()
{
	long long int p,q;
	cin>>p>>q;
	long long int i,temp=0,s3=0,s1=0,s2=0,count=0;
	
	for(i=p;i<=q;i++)
	{	
		s3=i*i;
		while (s3)
		 {
		      s2 += s3%10;
		      s3 = s3/10;
	     }
	    if(s1 == s2)
	    {
	    	count ++;
	    	cout<<i<<" ";
		}
		
	}
	if (count == 0)
		cout<<"INVALID RANGE";
}
