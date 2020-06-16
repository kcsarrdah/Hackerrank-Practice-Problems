#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int n, x;
        cin >> n;
        vector <int> a;
        for(int i = 0; i < n; i++){
                cin >> x;
                a.push_back(x);
        }
        for(int i = 1; i < n; i++){
              int j = i - 1;
                while(a[j] > a[j+1]){
                        int temp = a[j+1];
                        a[j+1] = a[j];
                        a[j] = temp;
                        j--;
                }
                for(int i = 0; i < n; i++){
                        cout << a[i] << " ";
                }
                cout << endl;
        }
    return 0;
}
