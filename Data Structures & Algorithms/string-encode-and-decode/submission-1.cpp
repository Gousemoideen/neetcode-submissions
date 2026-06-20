class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string st : strs) {
            ans+=st;
            ans+="`";
        }

        return ans;
    }

    vector<string> decode(string s) {
        string ans = "";


        vector<string> res;

        for(char c : s) {
            if(c == '`') {
                res.push_back(ans);
                ans= "";
            }
            else {
                ans.push_back(c);
            }

        }

        return res;
    }
};
