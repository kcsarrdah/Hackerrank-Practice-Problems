//making anagrams
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int changes = 0;
	
	int n1 = s1.size();
	int n2 = s2.size();
	
	int freq1[26] = {0};
	int freq2[26] = {0};
	
	for(int i = 0; i < n1; i++)
		freq1[s1[i]-'a']++;
			
	for(int i = 0; i < n2; i++)
		freq2[s2[i]-'a']++;
	

	
	for(int i = 0; i < 26; i++)
		changes += abs(freq1[i]-freq2[i]);
	
	cout<<changes<<endl;
	
	
}
