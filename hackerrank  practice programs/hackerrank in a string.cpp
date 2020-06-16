//hackerrank in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    whle(q--)
	{
        string t;
        cin>>t;
        string s="hackerrank";
        int c=0;
        size_t pos=t.find(s[0]);
       
         for(int i=1;i<10;i++)
		 {
           size_t pos1=t.find(s[i],pos+1);
           if(pos1!=string::npos)
               pos=pos1;
               else{
                   c++;
                  
               }                 
    }
    if(c==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 }
}
