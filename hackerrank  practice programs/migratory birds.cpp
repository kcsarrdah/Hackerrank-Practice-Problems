//migratory birds
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int dumarr[5] = {0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			dumarr[0]++;
		else if(arr[i] == 2)
			dumarr[1]++;
		else if(arr[i] == 3)
			dumarr[2]++;
		else if(arr[i] == 4)
			dumarr[3]++;
		else if(arr[i] == 5)
			dumarr[4]++;
	}
	int highest = 0;
	int answer = 0;
	for(int i = 0;i<5;i++)
	{
		if(dumarr[i]>highest)
		{
			highest = dumarr[i];
			answer= i+1;
		}
	}
	cout<<answer;	

	
}
