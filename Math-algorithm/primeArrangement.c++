#include <bits/stdc++.h>
using namespace std;

long long fun(int n){
        int m=1e9+7;
        long long ans=1;
        for(int i=2;i<=n;i++){
            ans=(ans*i)%m;
        }
        return ans%m;
    }
    int numPrimeArrangements(int n) {
        int c=0;
        int m=1e9+7;
        for(int i=2;i<=n;i++){
            bool isprime = true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime){
                c++;
            }
        }
        return (fun(c)*fun(n-c))%(m);
    }

int main(){

    int n;
    cin>>n;
    cout<<numPrimeArrangements(n);    
}