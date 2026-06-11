class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(string st : tokens) {
            if(st=="+") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();
                int ans = first + second;
                s.push(ans);
            }
            else  if(st=="-") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();
                int ans = second-first;
                s.push(ans);
            }
            else if(st=="*") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();
                int ans = first * second;
                s.push(ans);
            }
            else if(st=="/") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();
                int ans = second/first;
                s.push(ans);
            }
            else {
                s.push(stoi(st));
            }
        }

        return s.top();
    }
};
