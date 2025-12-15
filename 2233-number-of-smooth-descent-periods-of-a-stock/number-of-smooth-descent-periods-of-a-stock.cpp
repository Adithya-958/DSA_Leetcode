class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans = 1;
        int n = p.size();
        long long prev = 1;
        for(int i =1; i < n; i++){
                if(p[i-1]-p[i] == 1){
                    prev++;
                }
                else prev = 1;
                ans += prev;
        }
        return ans;
    }
};