#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    int p = 1, c = 0, j = 0, m = 1;
    //p = page no; c = no of special problems; j = temp var for counting k problems every time; m = no of problems per chapter;
    for(int i = 0; i < n; i++)
    { 
		m=1;
    	while(m <= ar[i])
    	{
           for(j=1;j<=k&&m<=ar[i];j++)
			{
					if(m == p)
						c+=1;
					m+=1;
			}
			p++;
    	}
    }
    cout<<c<<endl;
    return 0;
}
