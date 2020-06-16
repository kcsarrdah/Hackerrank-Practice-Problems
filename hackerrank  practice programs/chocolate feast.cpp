//chocolate feast
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,c,m;
		cin>>n>>c>>m;
		
		int choc_count = n/c;
		int wrap_count = choc_count;
		while(wrap_count >= m)
		{
			int temp = wrap_count/m;
			choc_count += temp;
			wrap_count = wrap_count%m + temp; 
		}
		cout<<choc_count<<endl;
	}
}
