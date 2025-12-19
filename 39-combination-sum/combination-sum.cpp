class Solution {
public:
    void rec(vector<int>& c, int t, int i, vector<int>& ds, vector<vector<int>>& ans ){
        if(i == c.size()){
        if(t == 0){
            ans.push_back(ds);
        }return;
        }
        if(c[i] <= t){
            ds.push_back(c[i]);
            rec(c,t-c[i],i,ds,ans);
            ds.pop_back();
        }
        rec(c,t,i+1,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<int> ds;
        vector<vector<int>> ans;
        rec(c,t,0,ds,ans);
        return ans;
    }
};