#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int arr1[a],arr2[b],arr3[c];
	for (int i=a; i>0; i--)
		cin>>arr1[i];
	for (int i=b; i>0; i--)
		cin>>arr2[i];
	for (int i=c; i>0; i--)
		cin>>arr3[i]; 
		
	int sum1[a],sum2[b],sum3[c];
	int s1=0,s2=0,s3=0;
	
	for(int i=0;i<a;i++)
	{
		s1 += arr1[i];
		sum1[i] = s1;
	}
	
	for(int i=0;i<b;i++)
	{
		s2 += arr2[i];
		sum2[i] = s2;
	}
	
	for(int i=0;i<c;i++)
	{
		s3 += arr3[i];
		sum3[i] = s3;
	}

	
}
