#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    int arr [n];
    cout<<"enter the no. of elements\n";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    cout<<sum;
    return 0;

}
