class Solution {
public:
    void reverseString(vector<char>& s) {
        int f=0,n=s.size(),e=n-1;

        while(f<e) {
            swap(s[f],s[e]);
            f++;
            e--;
        }
    }
};