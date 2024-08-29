#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    if (k <= 0) return n;
    cout<<(n & ~(1 << (k - 1)));

    return 0;
}