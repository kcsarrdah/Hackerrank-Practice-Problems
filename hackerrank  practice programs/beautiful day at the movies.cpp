//beautiful day
#import<iostream>
using namespace std;
int reverse(int a)
{
	int reversedno=0,remainder;
	while(a != 0)
    {
        remainder = a%10;
        reversedno = reversedno*10 + remainder;
        a /= 10;
    }	
    return reversedno;
}
int main()
{
	int i,j,k,n,rev,flag;
	cin>>i>>j>>k;
	
	for(n=i;n<=j;n++)
	{
		if((n-reverse(n))%k == 0)
		{
			flag++;
		}
	}
	cout<<flag;
}
