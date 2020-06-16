#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int n = str.size();
	int freq[26] = {0};
	int flag = 0;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < n; i++)
    {
    	freq[str[i] - 'a']++;
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(freq[i] == 0)
			{
				flag++;
				break;
			}
	}
	if(flag > 0)
		cout<<"not pangram"<<endl;
	else
		cout<<"pangram"<<endl;
}


