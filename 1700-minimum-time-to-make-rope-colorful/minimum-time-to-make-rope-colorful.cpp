class Solution {
public:
    int minCost(string s, vector<int>& t) {
        int i = 1,ans = 0;
        while(s[i] != '\0'){
            if(s[i] == s[i-1]){
                ans += fmin(t[i],t[i-1]);
                t[i] = fmax(t[i],t[i-1]);
            }
            i++;
        }return ans;
    }
};