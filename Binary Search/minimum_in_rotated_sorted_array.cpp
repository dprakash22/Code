class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_ = INT_MAX;
        int l=0;
        int r = nums.size()-1;
       
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[l]<=nums[mid]){
                min_ = min(nums[l],min_);
                l=mid+1;
            }
            else{
                min_ = min(nums[mid],min_);
                r=mid-1;
            }
        }
        return min_;
    }
};