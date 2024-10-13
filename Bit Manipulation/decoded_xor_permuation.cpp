class Solution {
public:
    int computeXOR(int n) 
        { 
        if (n % 4 == 0) 
            return n; 
        if (n % 4 == 1) 
            return 1; 
        if (n % 4 == 2) 
            return n + 1; 
        return 0; 
        }

    
    vector<int> decode(vector<int>& encoded) {
        vector<int> ans;
        int size_ = encoded.size()+1;
        int xor_ = computeXOR(size_);
        int k = 0;
        for(int i=0;i<encoded.size();i+=2){
            k ^= encoded[i];
        }

        int last = xor_ ^ k;
        ans.push_back(last);
        for(int i=size_-2;i>=0;i--){
            last = last^encoded[i];
            ans.push_back(last);   
        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
};