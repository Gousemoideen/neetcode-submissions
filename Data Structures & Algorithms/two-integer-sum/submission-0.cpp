class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());
        vector<int> ans;
        int n=nums.size();
        int i=0,j=n-1;

        while(i<j) {
            if(indexedNums[i].first+indexedNums[j].first==target) {
                ans.push_back(indexedNums[i].second);
                ans.push_back(indexedNums[j].second);
                break;
            }
            else if(indexedNums[i].first+indexedNums[j].first<target) {
                i++;
            }
            else {
                j--;
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};