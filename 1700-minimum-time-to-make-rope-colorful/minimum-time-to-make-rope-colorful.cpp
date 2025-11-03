class Solution {
public:
    int minCost(string s, vector<int>& t) {
        int ans = 0;
        // while(s[i] != '\0'){
        //     if(s[i] == s[i-1]){
        //         ans += fmin(t[i],t[i-1]);
        //         t[i] = fmax(t[i],t[i-1]);
        //     }
        //     i++;}
        int l = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[l] == s[i]){
                (t[l]<t[i])?((ans+=t[l])?l = i : 0) : (ans+=t[i]);
            }
            else{
                l = i;   
            }
        }
        return ans;
    }
};