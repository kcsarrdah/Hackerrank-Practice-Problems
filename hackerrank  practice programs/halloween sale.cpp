//halloween sale
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int ans = 0;
	
	while(s >= p)
	{
		//cout<<s<<" "<<p<<" "<<ans<<endl;
		ans++;
		
		if(p > m && p-d >= m)
		{
			s -= p;
			p -= d;
		}
		else
		{
			
			s -= m;
		}

	}
	cout<<ans<<endl;
}
