class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int p;

        for(int i=0;i<n;i++) {
            p=0;
            p = i;
            if(nums[i]<target) continue;
            else if(nums[i]>=target) return i;
            
        }
        return p+1;
    }
};