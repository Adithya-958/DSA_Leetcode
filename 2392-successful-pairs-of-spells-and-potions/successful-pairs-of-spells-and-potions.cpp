class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success){
        int count = 0;
        int n = s.size();
        vector<int> res(n);
        sort(p.begin(), p.end());
        for(int i = 0; i < n; i++){
            int idx = bs(p,s[i],success);
            if(idx != -1)
                res[i] = p.size() - idx;
        }
        return res;
    }
    int bs(vector<int>& p, long long s, long long success){
        int l = 0, h = p.size()-1, idx = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(1LL *p[mid]*s >= success){
                idx = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return idx;
    }
};
/*
int n = s.size(), m = p.size();
        for(int i = 0; i < n ; i++){
            int count = 0;
            long long val = 0;
            for(int j = 0; j < m; j++){
                val = s[i]*p[j];
                if(val >= success){
                    count++;
                    printf("%d is :", count);
                }
            }
            res.push_back(count);
*/