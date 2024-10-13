class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        for(int i=1;i<nums.size();i+=3){
            if(nums[i]!=nums[i-1] || nums[i]!=nums[i+1]){
                return nums[i-1];
            }
        }
        return -1;
    }
};