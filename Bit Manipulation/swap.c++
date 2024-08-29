#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    
    cout<<n<<" "<<k<<endl;

    n=n^k;
    k=n^k;
    n^=k;
    cout<<"after swaping"<<n<<" "<<k<<endl;

    return 0;
}