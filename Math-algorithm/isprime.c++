#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,f=1;
    cin>>k;
    for(int i=2;i<=sqrt(k);i++){
        if(k%i==0){
            f=0;
        }
    }
    if(f==1) cout<<"prime";
    else cout<<"not prime";
}