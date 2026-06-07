class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n = word1.length();
        int m = word2.length();


        for(int i=0;i<min(n,m);i++) {
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }

        int x = min(n,m);
        int y = max(n,m);
        for(int i=x;i<y;i++) {
            if(n>m) ans.push_back(word1[i]);
            else ans.push_back(word2[i]);
        }

        return ans;
    }
};