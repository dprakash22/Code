#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
        vector<bool> d(n,true);
        int k=n;
        int c=0;
        for(int i=2;i<=sqrt(k);i++){
            if(d[i]==true){
                for(int j=i*i;j<k;j=j+i){
                    d[j]=false;
                }
            }
        }
        for(int l=2;l<k;l++){
            if(d[l]){
                c++;
            }
        }
        return c;
    }

int main(){
    int n;
    cin>>n;
    cout<<countPrimes(n);
    return 0;
}