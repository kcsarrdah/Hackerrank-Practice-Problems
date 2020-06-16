#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	int arr[N];
	for(int i = 0; i < N; i++)
		cin>>arr[i];
		
		
	int f[K] = {0};
	
    for (int i = 0; i < N; i++) 
        f[arr[i] % K]++; 
        
    if (K % 2 == 0) 
        f[K/2] = min(f[K/2], 1); 
        
    int res = min(f[0], 1);     
    
    for (int i = 1; i <= K/2; i++) 
    	res += max(f[i], f[K-i]);
	
	cout<<res<<endl;
}
