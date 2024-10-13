class Solution {
public:
    int hammingDistance(int x, int y) {
        int k=x^y;
        int c=0;
        while(k){
            
            if(k&1){
                c+=1;
            }
            
            k>>=1;
            // cout<<k<<endl;
           
        }
        return c;
        
    }
};