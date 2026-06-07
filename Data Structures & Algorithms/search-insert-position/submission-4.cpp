class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int h=n-1,l=0,m;
        
        while(l<=h) {
            m = l+(h-l)/2;

            if(nums[m]==target) return m;
            else if(nums[m]<target) {
                l = m+1;
            }
            else h=m-1;
        }

        if(nums[m]>target) return m;
        else return m+1;
    }
};