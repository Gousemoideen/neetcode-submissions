class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;

        for(int i: stones) {
            p.push(i);
        }

        while(p.size()>1) {
            int x = p.top();
            p.pop();

            int y = p.top();
            p.pop();

            if(y!=x) {
                p.push(x-y);
            }
        }

        return p.empty()? 0 : p.top();
    }
};
