#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    if(((n>>k)&1)==0){
        cout<<"unsetbit";
    }else{
        cout<<"setbit";
    }
    return 0;
}