class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int n=people.size();
        int i=0,j=n-1,count=0;

        while(i<=j) {
            if(people[j]==limit) {
                j--;
                count++;
            }
            else if(people[j]<limit) {
                if(people[j]+people[i]<=limit) {
                    count++;
                    i++;j--;
                }
                else {
                    count++;
                    j--;
                }
            }
            else {
                count++;
                i++;
            }
        }
        

        return count;

    }
}; 