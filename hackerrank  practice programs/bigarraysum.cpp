#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    cin>>n;
    long long int arr [n],sum = 0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(x=0;x<n;x++)
    {
        sum += arr[x];
    }
    cout<<sum;
}

