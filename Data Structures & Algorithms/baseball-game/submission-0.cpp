class Solution {
public:
    int calPoints(vector<string>& operations) {
        

        stack<int> s;

        for(string c : operations) {
            if(c=="+") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.push(first);
                int third = first+second;
                s.push(third);
            }
            else if(c=="C") {
                s.pop();
            }
            else if(c=="D") {
                int ans = s.top();
                s.push(2*ans);
            }
            else {
                s.push(stoi(c));
            }
        }

        int sum = 0;
        while(!s.empty()) {
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};