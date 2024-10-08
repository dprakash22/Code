#include <bits/stdc++.h>
using namespace std;

//distinct-prime-factors-of-product-of-array leetcode question

void fun(map<int,int>& d, int n){
        while(n%2==0){
            d[2]=1;
            n=n/2;
        }
        for(int i=3;i*i<=n;i=i+2){
            while(n%i == 0){
                d[i]=1;
                n=n/i;
            }
        }
        if(n>2){
            d[n]=1;
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        map<int,int> d;
        int c=0;
        for(auto i : nums){
            fun(d,i);
        }
        map<int,int>::iterator it=d.begin();
        while(it!=d.end()){
            // cout<<it->first;
            c++;
            it++;
        }
        return c;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<distinctPrimeFactors(arr);
        return 0;
    }