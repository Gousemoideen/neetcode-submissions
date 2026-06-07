class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int i=0,j=1;

        while(i<nums.size() && j<nums.size()) {
            if(nums[i]==nums[j]) {
                j++;
                nums.erase(nums.begin() + i+1,nums.begin()+j);
                j=i+1;
            }
            else i++;
        }

        return nums.size();
    }
};