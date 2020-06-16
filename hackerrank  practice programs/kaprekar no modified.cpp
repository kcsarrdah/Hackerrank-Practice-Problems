#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int q;
    cin >> q;
    int flag=0;
    for(long int i=p; i<=q; i++){
        long int a = i*i;
        string s1=to_string(i);
        int d=s1.length();
        string s2=to_string(a);
        int n=s2.length();
        string s3="";
        string s4="";
        for(int j=0; j<n-d; j++){
            s3=s3+s2[j];
        }
        for(int j=n-d; j<n; j++){
            s4=s4+s2[j];
        }
        int b, c;
        if(s3==""){
            b=0;
        }else{
            b=stoi(s3);
        }
        if(s4==""){
            c=0;
        }else{
            c=stoi(s4);
        }
        if(b+c == i){
            cout << i << " ";
            flag=1;
        }
    }
    if(flag==0){
        cout << "INVALID RANGE";
    }
    return 0;
}
