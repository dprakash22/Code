//upper bound
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> vp = {9,10,11,20,29 ,30, 30,35,40, 40, 50};
    int k = 35;

    int low = 0;
    int high = vp.size()-1;
    int ans = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(vp[mid]>k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<" index";

    return 0;
}
