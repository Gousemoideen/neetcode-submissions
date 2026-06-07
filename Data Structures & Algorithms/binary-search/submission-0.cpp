class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(),h=n-1,l=0,m;

        while(l<=h) {
            m=l+(h-l)/2;

            if(nums[m]==target) return m;
            else if(nums[m]>target) h=m-1;
            else l=m+1; 
        }


        return -1;
    }
};
