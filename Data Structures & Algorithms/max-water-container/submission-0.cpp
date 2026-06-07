class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mA=0,i=0,n=heights.size(),j=n-1;

        int w,a;

        while(i<=j) {
            w = j-i;
            a = w*min(heights[i],heights[j]);
            mA = max(a,mA);
            if(heights[i]<heights[j]) i++;
            else j--;
        }

        return mA;
    }
};
