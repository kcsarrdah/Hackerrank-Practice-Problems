#include<bits/stdc++.h>
using namespace std;
int main(int p, int q) {
    int ans = 0;
    for(long int i=p;i<=q;i++){
        long int sum;
        long int a = 0;
        long int k = i;
        while(k!=0){
            k/=10 ; 
            a++;
        }
        long int l = i * i;
        long int g = pow(10,a);
        sum = l%g + l/g;
        if(sum == i){
            cout<<sum<<" ";
            ans++;
        }
    }
    if(ans == 0)
        cout<<"INVALID RANGE";       
}
