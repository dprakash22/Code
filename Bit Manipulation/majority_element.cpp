

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_ = nums[0];
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==max_){
                count+=1;
            }
            if(nums[i]!=max_){
                count--;
                
            }
            if(count==0){
                count=1;
                max_=nums[i];
            }   
        }
        return max_;
        
    }
};