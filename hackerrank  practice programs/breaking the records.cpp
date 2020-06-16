#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int score[n];
	for (i=0;i<n;i++)
	{
		cin>>score[i];
	}
	int min=score[0],max=score[0];
	int minc=0,maxc=0;
	for (i=1;i<n;i++)
	{
		if(score[i]>max)
		{
			max= score[i];
			maxc++;
		}
		else if(score[i]<min)
		{
			min= score[i];
			minc++;
		}
	}
	cout<<maxc<<" "<<minc;
}
