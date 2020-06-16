#include <bits/stdc++.h>
using namespace std;
int main() {
    int p,q,c=0;
    cin>>p;
    cin>>q;
 int count = 0;
    for (long long i = p; i <= q; i++) {
        long long square = i * i;
        long long square_copy = square;
        int digCount = 0;
        while (square_copy) {
            square_copy /= 10;
            digCount++;
        }
        digCount += digCount%2;

        long long power = 10;
        for (long long k = 1; k < digCount/2; k++) {
            power *= 10;
        }
        long long r = square % power;
        long long l = square / power;
        if (r + l == i) {
          cout<<i<<" "; 
          count++;
        }

    }

    if (count == 0) {
        cout<<"INVALID RANGE";
    }
    return 0;
}
