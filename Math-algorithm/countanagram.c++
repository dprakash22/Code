#include <bits/stdc++.h>
using namespace std;

long long modfun(long long a ,long long b){
        long long mod=1e9+7;
        long long res=1;
        while(b>0){
            if(b%2==1){
                res=(res*a)%mod;
            }
            a=(a*a) % mod;
            b=b/2;
        }
        return res % mod;
    }

    long long fact(long long n){
        long long mod=1e9+7,m=1;
        for(int i=1;i<=n;i++){
            m=m*i%(mod);
        }
        return m%mod;
    }

    int countAnagrams(string s) {
        long long d_fact=1,n_fact=0,ans=1,mod=1e9+7,l=s.size();
        unordered_map <char, int> d;
        for(int i=0;i<l;i++){
            if(s[i]==' ' || i==l-1){
                if(i==l-1){
                    n_fact++;
                    d[s[i]]++;
                }
                for(auto x: d){
                    d_fact=(d_fact * fact(x.second))%mod;
                    d[x.first]=0;
                }
                ans = (ans * fact(n_fact) % mod * modfun(d_fact, mod - 2) % mod) % mod;
                n_fact=0;
                d_fact=1;
            }else{
                n_fact++;
                d[s[i]]++;
            }
        }
        return ans%mod;
    }

    int main(){
        string s;
        getline(cin,s);
        cout<<countAnagrams(s);
        return 0;
    }