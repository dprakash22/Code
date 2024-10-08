#include <bits/stdc++.h>
using namespace std;

int main(){
    string st="adhi";
    rotate(st.begin(),st.begin()+2,st.end());
    std::string binary = std::bitset<2>(6).to_string();
    string d=st.substr(1,2);
    cout<<binary<<' '<<d<<" ";
    cout<<st;
    return 0;
}