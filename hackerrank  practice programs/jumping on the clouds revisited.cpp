//jumping on the clouds revisited
#include<iostream>
using namespace std;
int main()
    {
    int n,k,E=100;
    cin>>n>>k;
    int c[n];
   int i=0;
    while(i<n)
        {
        cin>>c[i];
        i++;
    }  for(int i=0;i<n;i+=k)
        {
        if(c[i]==1)
            E=E-3;
        else if(c[i]==0)
            E=E-1;
    }
    cout<<E;
}

