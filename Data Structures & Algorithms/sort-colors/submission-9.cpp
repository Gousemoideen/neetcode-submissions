class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(),front=0,back=n-1,mid=0;

        while(mid<=back) {
            if(nums[mid]==1) mid++; 
            else if(nums[mid]==0) {
                swap(nums[front],nums[mid]);
                front++,mid++;
            }
            else {
                swap(nums[back],nums[mid]);
                back--;
            }
        }
    }
};