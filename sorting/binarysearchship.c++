#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int> weights, int day, long long mid ){
        long long sum=weights[0];
        if(sum>mid) return false;
        int i=1;
        while(i<weights.size()){
            if((sum+weights[i])>mid){
                sum=0;
                day--;
                i--;
                if(day<0){
                    return false;
                }
            }else{
                sum+=weights[i];
            }
            i++;
        }
        if(sum>mid){
            return false;
        }else{
            day--;
            if(day<0){
                    return false;
             }
        }
        return true;

    }

    int shipWithinDays(vector<int>& weights, int days) {
        long long h=accumulate(weights.begin(), weights.end(), 0LL),l=0,ans;
        while(l<=h){
            long long mid = l+(h-l)/2;
            if(fun(weights, days, mid)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int> d;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        d.push_back(t);
    }
    int day;
    cin>>day;
    cout<<shipWithinDays(d,day);
    return 0;
}