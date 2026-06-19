class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0],sum=nums[0],n=nums.size();

        for(int i=1;i<n;i++) {
            
            sum = max(nums[i],nums[i]+sum);
            maxi = max(maxi,sum);
             
        
        }

        return maxi;
    }
};
