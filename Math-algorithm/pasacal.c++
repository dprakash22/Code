#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> d;
        vector<int> d1;
        for(int i=1;i<=numRows;i++){
            for(int j=1;j<=i;j++){
                if(j==1 || j==i){
                    d1.push_back(1);
                }
                else{
                    d1.push_back(d[i-2][j-1] + d[i-2][j-2]);
                }
            }
            d.push_back(d1);
            d1.clear();
        }
    return d;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> d=generate(n);
    for(int i=0;i<d.size();i++){
        for(int j=0;j<d[i].size();j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}