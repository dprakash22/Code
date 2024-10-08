
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int k=n==1?2:n;
    while(true){
        if((k>1e3 and k<1e4) or (k>1e5 and k<1e6) or (k>1e7 and k<1e7) ){
            k=pow(10,ceil(log10(k)));
            continue;
        }
        else{
            bool isprime=true;
            for(int i=2;i<=sqrt(k);i++){
                if(k%i==0){
                    isprime=false;
                    break;
                }
            }

            if(isprime){
                string s=to_string(k),s1=s;
                reverse(s.begin(),s.end());
                if(s==s1){
                    cout<<k;
                    break;
                }
            }
            k++;

        }
    }
    return 0;
}