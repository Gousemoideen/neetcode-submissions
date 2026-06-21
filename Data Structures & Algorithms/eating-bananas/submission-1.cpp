class Solution {
public:

    bool check(vector<int>& piles,int mid,int h) {
        int totalTime = 0;
        for(int i : piles) {
            if(i<mid) totalTime++;
            else {
                int n = (i + mid - 1) / mid;
                totalTime += n;
            }
        }

        if(totalTime > h) return false;
        else return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;

        while(low<=high) {

            int mid = low+(high-low)/2;

            if(check(piles,mid,h)) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        return ans;
    }
};
