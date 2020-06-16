#include<iostream>
using namespace std;
int main()
{
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	
	int pos1 = x1,pos2 = x2,flag = 0;
	while(pos1 != pos2)
	{
		pos1 += v1;
		pos2 += v2;
		if(pos1 == pos2)
		{
			cout<<"YES"<<endl;
			flag++;
			break;
		}
		else if(pos1 == 10000 || pos2 == 10000)
		{
			break;
		}
		
	}
	if(flag != 1)
		cout<<"NO"<<endl;
	
}
