class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0,n=bills.size();

        for(int i =0 ;i<n;i++) {
            if(bills[i]==5) f++;
            else if(bills[i]==10) {
                if(f>0) {
                    f--;
                    t++;
                }
                else return false;
            }
            else {
                if(t>0 && f>0) {
                    t--;
                    f--;
                }
                else if(t==0 && f>2) {
                    f = f-3;
                }
                else return false;
            }
        }

        return true;
    }
};