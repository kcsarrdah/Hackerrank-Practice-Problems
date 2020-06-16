#include<iostream>
using namespace std;
void accept(long long int a[5])
{	
	int i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
}
void display(long long int a[5])
{
	int j;
		for(j=0;j<5;j++)
	{
		cout<<a[j]<<" ";
	}
}
void swap(long long int *xp, long long int *yp)
{
    long long int temp = *xp;  
    *xp = *yp;  
    *yp = temp; 
}
void sort(long long int a[])
{
	long long int i,j;
	    for (i = 0; i < 4; i++)
		{
		    // Last i elements are already in place  
		    for (j = 0; j < 5-i-1; j++)
			{
				
		        if (a[j] > a[j+1])  
		            swap(&a[j], &a[j+1]);
			}
		}
}
void sum(long long int a[])
{
	long long int i,j,min=0,max=0;
	for(i=0;i<=3;i++)
	{
		min=min+a[i];
	}
	for (j=1;j<=4;j++)
	{
		max=max+a[j];
	}
	cout<<min<<" "<<max<<endl;
}
int main()
{
	long long int a[5];	
	accept(a);
	sort(a);
    sum(a);
	return 0;
}
