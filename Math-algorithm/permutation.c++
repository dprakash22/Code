#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& d){
    for(int i=0;i<d.size();i++){
        for(int j=0;j<d[0].size();j++){
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void printfun(vector<int> d){
    for(int j=0;j<d.size();j++){
            cout<<d[j]<<" ";
        }
        cout<<"\n";
}

void permutate(vector<vector<int>>& d, vector<int> arr , vector<int> s){
    if(arr.size()==0){
        d.push_back(s);
        return;
    }

    for(int i=0;i<arr.size();i++){
        vector<int> g=arr;
        g.erase(g.begin()+i);
        s.push_back(arr[i]);
        // cout<<"g call"<<" ";
        // printfun(g);
        // cout<<"s call"<<" ";
        // printfun(s);
        permutate(d,g,s);
        s.pop_back();
        // cout<<"g after call"<<" ";
        // printfun(g);
        // cout<<"s after call"<<" ";
        // printfun(s);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        arr.push_back(s);
    }
    vector<vector<int>>d;
    
    permutate(d, arr , {});
    cout<<"permutation \n";
    print(d);
    return 0;
}