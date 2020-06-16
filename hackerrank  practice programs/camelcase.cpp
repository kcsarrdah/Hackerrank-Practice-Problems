//camelcase
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count = 1;
	int l = s.length();
	for(int i = 0;i < l; i++)
		{
			if(isupper(s[i]))
				count++;
		}
		cout<<count<<endl;
}
