#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    cout<<(n ^ (1 << k));
    return 0;
}