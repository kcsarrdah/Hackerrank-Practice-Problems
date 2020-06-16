#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int x=0,y=0;
		int cata,catb,mouse;
		cin>>cata>>catb>>mouse;
		x = abs(cata-mouse);
		y = abs(catb - mouse);
		if(x>y)
			cout<<"Cat B\n";
		else if(x<y)
			cout<<"Cat A\n";
		else
			cout<<"Mouse C\n";
	}

}
