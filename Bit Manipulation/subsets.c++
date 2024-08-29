#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    vector<int> d(n,0);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    vector<int> s;
    vector<vector<int>> ans;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if( i & (1<<j)){
                s.push_back(d[j]);
            }
        }
        ans.push_back(s);
        s={};
    }

    for(auto x:ans){
        for(auto i:x){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}