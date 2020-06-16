//got-1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	int n = s.size();
	
	int freq[26] = {0};
	int flag = 0;
	
	for(int i = 0; i < n; i++)
			freq[s[i] - 'a']++;
		
	for(int i = 0; i < n; i++)
	{
		if(freq[s[i] - 'a']%2 != 0);
			flag++;
	}
	
	if (flag > 1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	
}
