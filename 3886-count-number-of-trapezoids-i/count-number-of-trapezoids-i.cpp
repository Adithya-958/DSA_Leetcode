class Solution {
public:
    int countTrapezoids(vector<vector<int>>& a) {
        unordered_map<int,int>mp;
        long long mod = 1e9 + 7;
        int total_prev_line = 0;
        long long res = 0;
        for(auto& i:a){
            int y = i[1];
            mp[y]++;
        }
        for(auto& i: mp){
            long long count = i.second;
            long long hoz_line = count*(count-1)/2;
            res += hoz_line*total_prev_line;
           total_prev_line += hoz_line;
        }return res%(mod);
    }
};