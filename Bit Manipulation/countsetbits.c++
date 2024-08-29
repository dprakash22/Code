#include <bits/stdc++.h>
using namespace std;

int countsetbits(int n) {
        int t=n,c=0;
        while(t){
            t=t&(t-1);
            c++;
        }
        return c;
}

int main(){
    int n;
    cin>>n;
    cout<<countsetbits(n);

    return 0;
}
