//happy ladybugs
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,flag = 0;
		cin>>n;
		string s;
		cin>>s;
		int f[27] = {0};
		for(int i = 0;i < n; i++)
		{
			if(s.at(i) == '_')
				f[0]++;
			else if(s.at(i) == 'A')
				f[1]++;
			else if(s.at(i) == 'B')
				f[2]++;
			else if(s.at(i) == 'C')
				f[3]++;
			else if(s.at(i) == 'D')
				f[4]++;
			else if(s.at(i) == 'E')
				f[5]++;
			else if(s.at(i) == 'F')
				f[6]++;
			else if(s.at(i) == 'G')
				f[7]++;
			else if(s.at(i) == 'H')
				f[8]++;
			else if(s.at(i) == 'I')
				f[9]++;
			else if(s.at(i) == 'J')
				f[10]++;
			else if(s.at(i) == 'K')
				f[11]++;
			else if(s.at(i) == 'L')
				f[12]++;
			else if(s.at(i) == 'M')
				f[13]++;
			else if(s.at(i) == 'N')
				f[14]++;
			else if(s.at(i) == 'O')
				f[15]++;
			else if(s.at(i) == 'P')
				f[16]++;
			else if(s.at(i) == 'Q')
				f[17]++;
			else if(s.at(i) == 'R')
				f[18]++;
			else if(s.at(i) == 'S')
				f[19]++;
			else if(s.at(i) == 'T')
				f[20]++;
			else if(s.at(i) == 'U')
				f[21]++;
			else if(s.at(i) == 'V')
				f[22]++;
			else if(s.at(i) == 'W')
				f[23]++;
			else if(s.at(i) == 'X')
				f[24]++;
			else if(s.at(i) == 'Y')
				f[25]++;
			else if(s.at(i) == 'Z')
				f[26]++;
		}
		for(int i = 1;i < 27; i++)
			{
				if(f[i] == 1)
				{
					flag++;
					break;
				}
			}
		if(f[0] > 0 && flag == 0)
			cout<<"YES"<<endl;
		
		else
			cout<<"NO"<<endl;
		
	}
}
