class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n=arr.size(),temp = 0,last = n-1;
        if(n==0) return 0;
        if(last==temp) return 0;
        

        while(temp<=last) {
            if(arr[temp]==val) {
                swap(arr[temp],arr[last]);
                last--;
            }
            else {
                temp++;
            }
        }

        return temp ;
        
    }
};