class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        bool flag = true;
        
        for(int i=0;i<strs[0].length();i++) {
            for(int j=1;j<strs.size();j++) {
                if(i >= strs[j].length() || strs[0][i]!=strs[j][i]) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(strs[0][i]);
            else break;
        }

        return ans;
        
    }
};