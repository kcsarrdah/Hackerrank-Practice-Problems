#include<iostream>
using namespace std;
int main()
{
int n, i, j ;
cin>>n;
int a[n];
for ( i=0 ; i<n ; i++ )
{
    cin>>a[i];
    if (a[i]<38||(a[i]%5<3))
    {
        a[i] = a[i];
    }

    else
    {
        a[i] = a[i] + (5 - a[i]%5);
    }
    cout << a[i] << endl;

}

return 0;
}
