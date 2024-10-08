#include <bits/stdc++.h>
using namespace std;

// =====> time complexity - o(b)
int main(){
    int a,b,res=1;
    cin>>a;
    cin>>b;
    while(b>0){
        if(b%2==1){
            res*=a;
        }
        a=a*a;
        b=b/2;
    }
    cout<<res;
    return 0;

}